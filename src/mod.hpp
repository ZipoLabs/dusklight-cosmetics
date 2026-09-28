#pragma once

#include "mods/svc/config.h"
#include "mods/svc/texture.h"

#include <gx.h>

#include <optional>
#include <string>
#include <vector>

struct cvars {
    ConfigVarHandle ordonClothesTopColor = 0;
    ConfigVarHandle ordonClothesBeltColor = 0;
    ConfigVarHandle ordonClothesSkirtColor = 0;
    ConfigVarHandle herosClothesCapColor = 0;
    ConfigVarHandle herosClothesUndershirtColor = 0;
    ConfigVarHandle herosClothesChainMailColor = 0;
    ConfigVarHandle herosClothesTopColor = 0;
    ConfigVarHandle herosClothesSkirtColor = 0;
    ConfigVarHandle herosClothesBottomsColor = 0;
    ConfigVarHandle herosClothesBootsColor = 0;
    ConfigVarHandle zoraArmorCapColor = 0;
    ConfigVarHandle zoraArmorHelmetColor = 0;
    ConfigVarHandle zoraArmorMaskColor = 0;
    ConfigVarHandle zoraArmorScalesColor = 0;
    ConfigVarHandle zoraArmorPauldronsColor = 0;
    ConfigVarHandle zoraArmorBeltColor = 0;
    ConfigVarHandle zoraArmorFlippersColor = 0;
    ConfigVarHandle magicArmorCapColor = 0;
    ConfigVarHandle magicArmorTiaraColor = 0;
    ConfigVarHandle magicArmorCuirassColor = 0;
    ConfigVarHandle magicArmorChainMailColor = 0;
    ConfigVarHandle magicArmorBeltColor = 0;
    ConfigVarHandle magicArmorAccessoriesColor = 0;
    ConfigVarHandle magicArmorVambracesColor = 0;
    ConfigVarHandle magicArmorBootsColor = 0;
    ConfigVarHandle woodenSwordColor = 0;
    ConfigVarHandle ordonSwordBladeColor = 0;
    ConfigVarHandle ordonSwordHandleColor = 0;
    ConfigVarHandle ordonSwordSheathColor = 0;
    ConfigVarHandle masterSwordBladeColor = 0;
    ConfigVarHandle masterSwordHandleColor = 0;
    ConfigVarHandle masterSwordSheathColor = 0;
    ConfigVarHandle lightSwordGlowColor = 0;
    ConfigVarHandle ordonShieldColor = 0;
    ConfigVarHandle woodenShieldColor = 0;
    ConfigVarHandle hylianShieldColor = 0;
    ConfigVarHandle lanternColor = 0;
    ConfigVarHandle lanternGlowColor = 0;
    ConfigVarHandle galeBoomerangColor = 0;
    ConfigVarHandle ironBootsColor = 0;
    ConfigVarHandle bombsColor = 0;
    ConfigVarHandle waterBombsColor = 0;
    ConfigVarHandle spinnerColor = 0;
    ConfigVarHandle bomblingsColor = 0;
    ConfigVarHandle heartColor = 0;
    ConfigVarHandle aButtonColor = 0;
    ConfigVarHandle bButtonColor = 0;
    ConfigVarHandle xButtonColor = 0;
    ConfigVarHandle yButtonColor = 0;
    ConfigVarHandle zButtonColor = 0;
    ConfigVarHandle midnaHairBaseColor = 0;
    ConfigVarHandle midnaHairTipsColor = 0;
    ConfigVarHandle midnaChargeRingColor = 0;
    ConfigVarHandle linkHairColor = 0;
    ConfigVarHandle linkEarringsColor = 0;
    ConfigVarHandle linkBracersColor = 0;
    ConfigVarHandle linkVambraceColor = 0;
    ConfigVarHandle wolfLinkColor = 0;
    ConfigVarHandle eponaColor = 0;
};

struct TextureReplacementData {
    const char* arc{};
    const char* modelFileName{};
    const char* textureName{};
    uint64_t textureHash{};
    uint64_t tlutHash{};
    TextureKey key = TEXTURE_KEY_INIT;
    TextureData data = TEXTURE_DATA_INIT;
    TextureReplacementHandle handle{};
    std::vector<u8> baseTextureData{};
    bool loadedTextureData = false;
    std::optional<GXColor> curColor{};
};

cvars& get_cvars();

std::string get_str_option(ConfigVarHandle handle, const std::string& fallback);

int64_t get_int_option(ConfigVarHandle handle, int64_t fallback);

std::optional<GXColor> get_config_var_color(ConfigVarHandle handle, bool allowRainbow = false);