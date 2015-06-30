
#include <cstring>
#include "UpdateFieldNameMap.h"

struct NameMapping
{
    char const* NewName;
    char const* OldName;
};

#define NUM_NAMES 288

NameMapping NameMap[NUM_NAMES] =
{
    { "CGObjectData::m_guid", "OBJECT_FIELD_GUID" },
    { "CGObjectData::m_data", "OBJECT_FIELD_DATA" },
    { "CGObjectData::m_type", "OBJECT_FIELD_TYPE" },
    { "CGObjectData::m_entryID", "OBJECT_FIELD_ENTRY" },
    { "CGObjectData::m_dynamicFlags", "OBJECT_DYNAMIC_FLAGS" },
    { "CGObjectData::m_scale", "OBJECT_FIELD_SCALE_X" },

    { "CGItemData::m_owner", "ITEM_FIELD_OWNER" },
    { "CGItemData::m_containedIn", "ITEM_FIELD_CONTAINED" },
    { "CGItemData::m_creator", "ITEM_FIELD_CREATOR" },
    { "CGItemData::m_giftCreator", "ITEM_FIELD_GIFTCREATOR" },
    { "CGItemData::m_stackCount", "ITEM_FIELD_STACK_COUNT" },
    { "CGItemData::m_expiration", "ITEM_FIELD_DURATION" },
    { "CGItemData::m_spellCharges", "ITEM_FIELD_SPELL_CHARGES" },
    { "CGItemData::m_dynamicFlags", "ITEM_FIELD_FLAGS" },
    { "CGItemData::m_enchantment", "ITEM_FIELD_ENCHANTMENT" },
    { "CGItemData::m_propertySeed", "ITEM_FIELD_PROPERTY_SEED" },
    { "CGItemData::m_randomPropertiesID", "ITEM_FIELD_RANDOM_PROPERTIES_ID" },
    { "CGItemData::m_durability", "ITEM_FIELD_DURABILITY" },
    { "CGItemData::m_maxDurability", "ITEM_FIELD_MAXDURABILITY" },
    { "CGItemData::m_createPlayedTime", "ITEM_FIELD_CREATE_PLAYED_TIME" },
    { "CGItemData::m_modifiersMask", "ITEM_FIELD_MODIFIERS_MASK" },
    { "CGItemData::m_contextID", "ITEM_FIELD_CONTEXT_ID" },
    { "CGItemData::m_context", "ITEM_FIELD_CONTEXT" },

    { "CGItemDynamicData::m_modifiers", "ITEM_DYNAMIC_FIELD_MODIFIERS" },
    { "CGItemDynamicData::m_bonusListIDs", "ITEM_DYNAMIC_FIELD_BONUSLIST_IDS" },

    { "CGContainerData::m_slots", "CONTAINER_FIELD_SLOT_1" },
    { "CGContainerData::m_numSlots", "CONTAINER_FIELD_NUM_SLOTS" },

    { "CGUnitData::charm", "UNIT_FIELD_CHARM" },
    { "CGUnitData::summon", "UNIT_FIELD_SUMMON" },
    { "CGUnitData::critter", "UNIT_FIELD_CRITTER" },
    { "CGUnitData::charmedBy", "UNIT_FIELD_CHARMEDBY" },
    { "CGUnitData::summonedBy", "UNIT_FIELD_SUMMONEDBY" },
    { "CGUnitData::createdBy", "UNIT_FIELD_CREATEDBY" },
    { "CGUnitData::demonCreator", "UNIT_FIELD_DEMON_CREATOR" },
    { "CGUnitData::target", "UNIT_FIELD_TARGET" },
    { "CGUnitData::battlePetCompanionGUID", "UNIT_FIELD_BATTLE_PET_COMPANION_GUID" },
    { "CGUnitData::battlePetDBID", "UNIT_FIELD_BATTLE_PET_DB_ID" },
    { "CGUnitData::channelObject", "UNIT_FIELD_CHANNEL_OBJECT" },
    { "CGUnitData::channelSpell", "UNIT_CHANNEL_SPELL" },
    { "CGUnitData::channelSpellXSpellVisual", "UNIT_CHANNEL_SPELL_X_SPELL_VISUAL" },
    { "CGUnitData::summonedByHomeRealm", "UNIT_FIELD_SUMMONED_BY_HOME_REALM" },
    { "CGUnitData::sex", "UNIT_FIELD_BYTES_0" },
    { "CGUnitData::displayPower", "UNIT_FIELD_DISPLAY_POWER" },
    { "CGUnitData::overrideDisplayPowerID", "UNIT_FIELD_OVERRIDE_DISPLAY_POWER_ID" },
    { "CGUnitData::health", "UNIT_FIELD_HEALTH" },
    { "CGUnitData::power", "UNIT_FIELD_POWER" },
    { "CGUnitData::maxHealth", "UNIT_FIELD_MAXHEALTH" },
    { "CGUnitData::maxPower", "UNIT_FIELD_MAXPOWER" },
    { "CGUnitData::powerRegenFlatModifier", "UNIT_FIELD_POWER_REGEN_FLAT_MODIFIER" },
    { "CGUnitData::powerRegenInterruptedFlatModifier", "UNIT_FIELD_POWER_REGEN_INTERRUPTED_FLAT_MODIFIER" },
    { "CGUnitData::level", "UNIT_FIELD_LEVEL" },
    { "CGUnitData::effectiveLevel", "UNIT_FIELD_EFFECTIVE_LEVEL" },
    { "CGUnitData::factionTemplate", "UNIT_FIELD_FACTIONTEMPLATE" },
    { "CGUnitData::virtualItemID", "UNIT_VIRTUAL_ITEM_SLOT_ID" },
    { "CGUnitData::virtualItems", "UNIT_VIRTUAL_ITEM_SLOT_ID" },
    { "CGUnitData::flags", "UNIT_FIELD_FLAGS" },
    { "CGUnitData::flags2", "UNIT_FIELD_FLAGS_2" },
    { "CGUnitData::flags3", "UNIT_FIELD_FLAGS_3" },
    { "CGUnitData::auraState", "UNIT_FIELD_AURASTATE" },
    { "CGUnitData::attackRoundBaseTime", "UNIT_FIELD_BASEATTACKTIME" },
    { "CGUnitData::rangedAttackRoundBaseTime", "UNIT_FIELD_RANGEDATTACKTIME" },
    { "CGUnitData::boundingRadius", "UNIT_FIELD_BOUNDINGRADIUS" },
    { "CGUnitData::combatReach", "UNIT_FIELD_COMBATREACH" },
    { "CGUnitData::displayID", "UNIT_FIELD_DISPLAYID" },
    { "CGUnitData::nativeDisplayID", "UNIT_FIELD_NATIVEDISPLAYID" },
    { "CGUnitData::mountDisplayID", "UNIT_FIELD_MOUNTDISPLAYID" },
    { "CGUnitData::minDamage", "UNIT_FIELD_MINDAMAGE" },
    { "CGUnitData::maxDamage", "UNIT_FIELD_MAXDAMAGE" },
    { "CGUnitData::minOffHandDamage", "UNIT_FIELD_MINOFFHANDDAMAGE" },
    { "CGUnitData::maxOffHandDamage", "UNIT_FIELD_MAXOFFHANDDAMAGE" },
    { "CGUnitData::animTier", "UNIT_FIELD_BYTES_1" },
    { "CGUnitData::petNumber", "UNIT_FIELD_PETNUMBER" },
    { "CGUnitData::petNameTimestamp", "UNIT_FIELD_PET_NAME_TIMESTAMP" },
    { "CGUnitData::petExperience", "UNIT_FIELD_PETEXPERIENCE" },
    { "CGUnitData::petNextLevelExperience", "UNIT_FIELD_PETNEXTLEVELEXP" },
    { "CGUnitData::modCastingSpeed", "UNIT_MOD_CAST_SPEED" },
    { "CGUnitData::modSpellHaste", "UNIT_MOD_CAST_HASTE" },
    { "CGUnitData::modHaste", "UNIT_FIELD_MOD_HASTE" },
    { "CGUnitData::modRangedHaste", "UNIT_FIELD_MOD_RANGED_HASTE" },
    { "CGUnitData::modHasteRegen", "UNIT_FIELD_MOD_HASTE_REGEN" },
    { "CGUnitData::createdBySpell", "UNIT_CREATED_BY_SPELL" },
    { "CGUnitData::npcFlags", "UNIT_NPC_FLAGS" },
    { "CGUnitData::emoteState", "UNIT_NPC_EMOTESTATE" },
    { "CGUnitData::stats", "UNIT_FIELD_STAT" },
    { "CGUnitData::statPosBuff", "UNIT_FIELD_POSSTAT" },
    { "CGUnitData::statNegBuff", "UNIT_FIELD_NEGSTAT" },
    { "CGUnitData::resistances", "UNIT_FIELD_RESISTANCES" },
    { "CGUnitData::resistanceBuffModsPositive", "UNIT_FIELD_RESISTANCEBUFFMODSPOSITIVE" },
    { "CGUnitData::resistanceBuffModsNegative", "UNIT_FIELD_RESISTANCEBUFFMODSNEGATIVE" },
    { "CGUnitData::modBonusArmor", "UNIT_FIELD_MOD_BONUS_ARMOR" },
    { "CGUnitData::baseMana", "UNIT_FIELD_BASE_MANA" },
    { "CGUnitData::baseHealth", "UNIT_FIELD_BASE_HEALTH" },
    { "CGUnitData::shapeshiftForm", "UNIT_FIELD_BYTES_2" },
    { "CGUnitData::attackPower", "UNIT_FIELD_ATTACK_POWER" },
    { "CGUnitData::attackPowerModPos", "UNIT_FIELD_ATTACK_POWER_MOD_POS" },
    { "CGUnitData::attackPowerModNeg", "UNIT_FIELD_ATTACK_POWER_MOD_NEG" },
    { "CGUnitData::attackPowerMultiplier", "UNIT_FIELD_ATTACK_POWER_MULTIPLIER" },
    { "CGUnitData::rangedAttackPower", "UNIT_FIELD_RANGED_ATTACK_POWER" },
    { "CGUnitData::rangedAttackPowerModPos", "UNIT_FIELD_RANGED_ATTACK_POWER_MOD_POS" },
    { "CGUnitData::rangedAttackPowerModNeg", "UNIT_FIELD_RANGED_ATTACK_POWER_MOD_NEG" },
    { "CGUnitData::rangedAttackPowerMultiplier", "UNIT_FIELD_RANGED_ATTACK_POWER_MULTIPLIER" },
    { "CGUnitData::minRangedDamage", "UNIT_FIELD_MINRANGEDDAMAGE" },
    { "CGUnitData::maxRangedDamage", "UNIT_FIELD_MAXRANGEDDAMAGE" },
    { "CGUnitData::powerCostModifier", "UNIT_FIELD_POWER_COST_MODIFIER" },
    { "CGUnitData::powerCostMultiplier", "UNIT_FIELD_POWER_COST_MULTIPLIER" },
    { "CGUnitData::maxHealthModifier", "UNIT_FIELD_MAXHEALTHMODIFIER" },
    { "CGUnitData::hoverHeight", "UNIT_FIELD_HOVERHEIGHT" },
    { "CGUnitData::minItemLevelCutoff", "UNIT_FIELD_MIN_ITEM_LEVEL_CUTOFF" },
    { "CGUnitData::minItemLevel", "UNIT_FIELD_MIN_ITEM_LEVEL" },
    { "CGUnitData::maxItemLevel", "UNIT_FIELD_MAXITEMLEVEL" },
    { "CGUnitData::wildBattlePetLevel", "UNIT_FIELD_WILD_BATTLEPET_LEVEL" },
    { "CGUnitData::battlePetCompanionNameTimestamp", "UNIT_FIELD_BATTLEPET_COMPANION_NAME_TIMESTAMP" },
    { "CGUnitData::interactSpellID", "UNIT_FIELD_INTERACT_SPELLID" },
    { "CGUnitData::stateSpellVisualID", "UNIT_FIELD_STATE_SPELL_VISUAL_ID" },
    { "CGUnitData::stateAnimID", "UNIT_FIELD_STATE_ANIM_ID" },
    { "CGUnitData::stateAnimKitID", "UNIT_FIELD_STATE_ANIM_KIT_ID" },
    { "CGUnitData::stateWorldEffectID", "UNIT_FIELD_STATE_WORLD_EFFECT_ID" },
    { "CGUnitData::scaleDuration", "UNIT_FIELD_SCALE_DURATION" },
    { "CGUnitData::looksLikeMountID", "UNIT_FIELD_LOOKS_LIKE_MOUNT_ID" },
    { "CGUnitData::looksLikeCreatureID", "UNIT_FIELD_LOOKS_LIKE_CREATURE_ID" },
    { "CGUnitData::lookAtControllerID", "UNIT_FIELD_LOOK_AT_CONTROLLER_ID" },
    { "CGUnitData::lookAtControllerTarget", "UNIT_FIELD_LOOK_AT_CONTROLLER_TARGET" },

    { "CGUnitDynamicData::passiveSpells", "UNIT_DYNAMIC_FIELD_PASSIVE_SPELLS" },
    { "CGUnitDynamicData::worldEffects", "UNIT_DYNAMIC_FIELD_WORLD_EFFECTS" },

    { "CGPlayerData::duelArbiter", "PLAYER_DUEL_ARBITER" },
    { "CGPlayerData::wowAccount", "PLAYER_WOW_ACCOUNT" },
    { "CGPlayerData::lootTargetGUID", "PLAYER_LOOT_TARGET_GUID" },
    { "CGPlayerData::playerFlags", "PLAYER_FLAGS" },
    { "CGPlayerData::playerFlagsEx", "PLAYER_FLAGS_EX" },
    { "CGPlayerData::guildRankID", "PLAYER_GUILDRANK" },
    { "CGPlayerData::guildDeleteDate", "PLAYER_GUILDDELETE_DATE" },
    { "CGPlayerData::guildLevel", "PLAYER_GUILDLEVEL" },
    { "CGPlayerData::hairColorID", "PLAYER_BYTES" },
    { "CGPlayerData::restState", "PLAYER_BYTES_2" },
    { "CGPlayerData::arenaFaction", "PLAYER_BYTES_3" },
    { "CGPlayerData::duelTeam", "PLAYER_DUEL_TEAM" },
    { "CGPlayerData::guildTimeStamp", "PLAYER_GUILD_TIMESTAMP" },
    { "CGPlayerData::questLog", "PLAYER_QUEST_LOG" },
    { "CGPlayerData::visibleItems", "PLAYER_VISIBLE_ITEM" },
    { "CGPlayerData::playerTitle", "PLAYER_CHOSEN_TITLE" },
    { "CGPlayerData::fakeInebriation", "PLAYER_FAKE_INEBRIATION" },
    { "CGPlayerData::virtualPlayerRealm", "PLAYER_FIELD_VIRTUAL_PLAYER_REALM" },
    { "CGPlayerData::currentSpecID", "PLAYER_FIELD_CURRENT_SPEC_ID" },
    { "CGPlayerData::taxiMountAnimKitID", "PLAYER_FIELD_TAXI_MOUNT_ANIM_KIT_ID" },
    { "CGPlayerData::avgItemLevelTotal", "PLAYER_FIELD_AVG_ITEM_LEVEL_TOTAL" },
    { "CGPlayerData::avgItemLevelEquipped", "PLAYER_FIELD_AVG_ITEM_LEVEL_EQUIPPED" },
    { "CGPlayerData::avgItemLevel", "PLAYER_FIELD_AVG_ITEM_LEVEL" },
    { "CGPlayerData::currentBattlePetBreedQuality", "PLAYER_FIELD_CURRENT_BATTLE_PET_BREED_QUALITY" },
    { "CGPlayerData::local.invSlots", "PLAYER_FIELD_INV_SLOT_HEAD" },
    { "CGPlayerData::local.farsightObject", "PLAYER_FARSIGHT" },
    { "CGPlayerData::local.knownTitles", "PLAYER__FIELD_KNOWN_TITLES" },
    { "CGPlayerData::local.coinage", "PLAYER_FIELD_COINAGE" },
    { "CGPlayerData::local.XP", "PLAYER_XP" },
    { "CGPlayerData::local.nextLevelXP", "PLAYER_NEXT_LEVEL_XP" },
    { "CGPlayerData::local.skill", "PLAYER_SKILL_LINEID" },
    { "CGPlayerData::local.characterPoints", "PLAYER_CHARACTER_POINTS" },
    { "CGPlayerData::local.maxTalentTiers", "PLAYER_FIELD_MAX_TALENT_TIERS" },
    { "CGPlayerData::local.trackCreatureMask", "PLAYER_TRACK_CREATURES" },
    { "CGPlayerData::local.trackResourceMask", "PLAYER_TRACK_RESOURCES" },
    { "CGPlayerData::local.mainhandExpertise", "PLAYER_EXPERTISE" },
    { "CGPlayerData::local.offhandExpertise", "PLAYER_OFFHAND_EXPERTISE" },
    { "CGPlayerData::local.rangedExpertise", "PLAYER_FIELD_RANGED_EXPERTISE" },
    { "CGPlayerData::local.combatRatingExpertise", "PLAYER_FIELD_COMBAT_RATING_EXPERTISE" },
    { "CGPlayerData::local.blockPercentage", "PLAYER_BLOCK_PERCENTAGE" },
    { "CGPlayerData::local.dodgePercentage", "PLAYER_DODGE_PERCENTAGE" },
    { "CGPlayerData::local.parryPercentage", "PLAYER_PARRY_PERCENTAGE" },
    { "CGPlayerData::local.critPercentage", "PLAYER_CRIT_PERCENTAGE" },
    { "CGPlayerData::local.rangedCritPercentage", "PLAYER_RANGED_CRIT_PERCENTAGE" },
    { "CGPlayerData::local.offhandCritPercentage", "PLAYER_OFFHAND_CRIT_PERCENTAGE" },
    { "CGPlayerData::local.spellCritPercentage", "PLAYER_SPELL_CRIT_PERCENTAGE1" },
    { "CGPlayerData::local.shieldBlock", "PLAYER_SHIELD_BLOCK" },
    { "CGPlayerData::local.shieldBlockCritPercentage", "PLAYER_SHIELD_BLOCK_CRIT_PERCENTAGE" },
    { "CGPlayerData::local.mastery", "PLAYER_MASTERY" },
    { "CGPlayerData::local.amplify", "PLAYER_AMPLIFY" },
    { "CGPlayerData::local.multistrike", "PLAYER_MULTISTRIKE" },
    { "CGPlayerData::local.multistrikeEffect", "PLAYER_MULTISTRIKE_EFFECT" },
    { "CGPlayerData::local.readiness", "PLAYER_READINESS" },
    { "CGPlayerData::local.speed", "PLAYER_SPEED" },
    { "CGPlayerData::local.lifesteal", "PLAYER_LIFESTEAL" },
    { "CGPlayerData::local.avoidance", "PLAYER_AVOIDANCE" },
    { "CGPlayerData::local.sturdiness", "PLAYER_STURDINESS" },
    { "CGPlayerData::local.cleave", "PLAYER_CLEAVE" },
    { "CGPlayerData::local.versatility", "PLAYER_VERSATILITY" },
    { "CGPlayerData::local.versatilityBonus", "PLAYER_VERSATILITY_BONUS" },
    { "CGPlayerData::local.pvpPowerDamage", "PLAYER_FIELD_PVP_POWER_DAMAGE" },
    { "CGPlayerData::local.pvpPowerHealing", "PLAYER_FIELD_PVP_POWER_HEALING" },
    { "CGPlayerData::local.exploredZones", "PLAYER_EXPLORED_ZONES_1" },
    { "CGPlayerData::local.restStateBonusPool", "PLAYER_REST_STATE_EXPERIENCE" },
    { "CGPlayerData::local.modDamageDonePos", "PLAYER_FIELD_MOD_DAMAGE_DONE_POS" },
    { "CGPlayerData::local.modDamageDoneNeg", "PLAYER_FIELD_MOD_DAMAGE_DONE_NEG" },
    { "CGPlayerData::local.modDamageDonePercent", "PLAYER_FIELD_MOD_DAMAGE_DONE_PCT" },
    { "CGPlayerData::local.modHealingDonePos", "PLAYER_FIELD_MOD_HEALING_DONE_POS" },
    { "CGPlayerData::local.modHealingPercent", "PLAYER_FIELD_MOD_HEALING_PCT" },
    { "CGPlayerData::local.modHealingDonePercent", "PLAYER_FIELD_MOD_HEALING_DONE_PCT" },
    { "CGPlayerData::local.modPeriodicHealingDonePercent", "PLAYER_FIELD_MOD_PERIODIC_HEALING_DONE_PERCENT" },
    { "CGPlayerData::local.weaponDmgMultipliers", "PLAYER_FIELD_WEAPON_DMG_MULTIPLIERS" },
    { "CGPlayerData::local.weaponAtkSpeedMultipliers", "PLAYER_FIELD_WEAPON_ATK_SPEED_MULTIPLIERS" },
    { "CGPlayerData::local.modSpellPowerPercent", "PLAYER_FIELD_MOD_SPELL_POWER_PCT" },
    { "CGPlayerData::local.modResiliencePercent", "PLAYER_FIELD_MOD_RESILIENCE_PERCENT" },
    { "CGPlayerData::local.overrideSpellPowerByAPPercent", "PLAYER_FIELD_OVERRIDE_SPELL_POWER_BY_AP_PCT" },
    { "CGPlayerData::local.overrideAPBySpellPowerPercent", "PLAYER_FIELD_OVERRIDE_AP_BY_SPELL_POWER_PERCENT" },
    { "CGPlayerData::local.modTargetResistance", "PLAYER_FIELD_MOD_TARGET_RESISTANCE" },
    { "CGPlayerData::local.modTargetPhysicalResistance", "PLAYER_FIELD_MOD_TARGET_PHYSICAL_RESISTANCE" },
    { "CGPlayerData::local.localFlags", "PLAYER_FIELD_LOCAL_FLAGS" },
    { "CGPlayerData::local.lifetimeMaxRank", "PLAYER_FIELD_BYTES" },
    { "CGPlayerData::local.selfResSpell", "PLAYER_SELF_RES_SPELL" },
    { "CGPlayerData::local.pvpMedals", "PLAYER_FIELD_PVP_MEDALS" },
    { "CGPlayerData::local.buybackPrice", "PLAYER_FIELD_BUYBACK_PRICE_1" },
    { "CGPlayerData::local.buybackTimestamp", "PLAYER_FIELD_BUYBACK_TIMESTAMP_1" },
    { "CGPlayerData::local.yesterdayHonorableKills", "PLAYER_FIELD_KILLS" },
    { "CGPlayerData::local.lifetimeHonorableKills", "PLAYER_FIELD_LIFETIME_HONORABLE_KILLS" },
    { "CGPlayerData::local.watchedFactionIndex", "PLAYER_FIELD_WATCHED_FACTION_INDEX" },
    { "CGPlayerData::local.combatRatings", "PLAYER_FIELD_COMBAT_RATING_1" },
    { "CGPlayerData::local.pvpInfo", "PLAYER_FIELD_ARENA_TEAM_INFO_1_1" },
    { "CGPlayerData::local.maxLevel", "PLAYER_FIELD_MAX_LEVEL" },
    { "CGPlayerData::local.runeRegen", "PLAYER_RUNE_REGEN_1" },
    { "CGPlayerData::local.noReagentCostMask", "PLAYER_NO_REAGENT_COST_1" },
    { "CGPlayerData::local.glyphSlots", "PLAYER_FIELD_GLYPH_SLOTS_1" },
    { "CGPlayerData::local.glyphs", "PLAYER_FIELD_GLYPHS_1" },
    { "CGPlayerData::local.glyphSlotsEnabled", "PLAYER_GLYPHS_ENABLED" },
    { "CGPlayerData::local.petSpellPower", "PLAYER_PET_SPELL_POWER" },
    { "CGPlayerData::local.researching", "PLAYER_FIELD_RESEARCHING_1" },
    { "CGPlayerData::local.professionSkillLine", "PLAYER_PROFESSION_SKILL_LINE_1" },
    { "CGPlayerData::local.uiHitModifier", "PLAYER_FIELD_UI_HIT_MODIFIER" },
    { "CGPlayerData::local.uiSpellHitModifier", "PLAYER_FIELD_UI_SPELL_HIT_MODIFIER" },
    { "CGPlayerData::local.homeRealmTimeOffset", "PLAYER_FIELD_HOME_REALM_TIME_OFFSET" },
    { "CGPlayerData::local.modPetHaste", "PLAYER_FIELD_MOD_PET_HASTE" },
    { "CGPlayerData::local.summonedBattlePetGUID", "PLAYER_FIELD_SUMMONED_BATTLE_PET_ID" },
    { "CGPlayerData::local.overrideSpellsID", "PLAYER_FIELD_BYTES2" },
    { "CGPlayerData::local.lfgBonusFactionID", "PLAYER_FIELD_LFG_BONUS_FACTION_ID" },
    { "CGPlayerData::local.lootSpecID", "PLAYER_FIELD_LOOT_SPEC_ID" },
    { "CGPlayerData::local.overrideZonePVPType", "PLAYER_FIELD_OVERRIDE_ZONE_PVP_TYPE" },
    { "CGPlayerData::local.itemLevelDelta", "PLAYER_FIELD_ITEM_LEVEL_DELTA" },
    { "CGPlayerData::local.bagSlotFlags", "PLAYER_FIELD_BAG_SLOT_FLAGS" },
    { "CGPlayerData::local.bankBagSlotFlags", "PLAYER_FIELD_BANK_BAG_SLOT_FLAGS" },
    { "CGPlayerData::local.bankAutoSortDisabled", "PLAYER_FIELD_BANK_AUTOSORT_DISABLED" },
    { "CGPlayerData::local.bankBagSlotAutoSortDisabled", "PLAYER_FIELD_BANK_BAG_AUTOSORT_DISABLED" },
    { "CGPlayerData::local.insertItemsLeftToRight", "PLAYER_FIELD_INSERT_ITEMS_LEFT_TO_RIGHT" },
    { "CGPlayerData::local.questCompleted", "PLAYER_FIELD_QUEST_COMPLETED" },

    { "CGPlayerDynamicData::researchSites", "PLAYER_DYNAMIC_FIELD_RESERACH_SITE" },
    { "CGPlayerDynamicData::researchSiteProgress", "PLAYER_DYNAMIC_FIELD_RESEARCH_SITE_PROGRESS" },
    { "CGPlayerDynamicData::dailyQuestsCompleted", "PLAYER_DYNAMIC_FIELD_DAILY_QUESTS" },
    { "CGPlayerDynamicData::availableQuestLineXQuestIDs", "PLAYER_DYNAMIC_FIELD_AVAILABLE_QUEST_LINE_X_QUEST_ID" },
    { "CGPlayerDynamicData::heirlooms", "PLAYER_DYNAMIC_FIELD_HEIRLOOMS" },
    { "CGPlayerDynamicData::heirloomFlags", "PLAYER_DYNAMIC_FIELD_HEIRLOOM_FLAGS" },
    { "CGPlayerDynamicData::toys", "PLAYER_DYNAMIC_FIELD_TOYS" },

    { "CGGameObjectData::m_createdBy", "GAMEOBJECT_FIELD_CREATED_BY" },
    { "CGGameObjectData::m_displayID", "GAMEOBJECT_DISPLAYID" },
    { "CGGameObjectData::m_flags", "GAMEOBJECT_FLAGS" },
    { "CGGameObjectData::m_parentRotation", "GAMEOBJECT_PARENTROTATION" },
    { "CGGameObjectData::m_factionTemplate", "GAMEOBJECT_FACTION" },
    { "CGGameObjectData::m_level", "GAMEOBJECT_LEVEL" },
    { "CGGameObjectData::m_percentHealth", "GAMEOBJECT_BYTES_1" },
    { "CGGameObjectData::m_spellVisualID", "GAMEOBJECT_SPELL_VISUAL_ID" },
    { "CGGameObjectData::m_stateSpellVisualID", "GAMEOBJECT_STATE_SPELL_VISUAL_ID" },
    { "CGGameObjectData::m_stateAnimID", "GAMEOBJECT_STATE_ANIM_ID" },
    { "CGGameObjectData::m_stateAnimKitID", "GAMEOBJECT_STATE_ANIM_KIT_ID" },
    { "CGGameObjectData::m_stateWorldEffectID", "GAMEOBJECT_STATE_WORLD_EFFECT_ID" },

    { "CGGameObjectDynamicData::enableDoodadSets", "GAMEOBJECT_DYNAMIC_ENABLE_DOODAD_SETS" },

    { "CGDynamicObjectData::m_caster", "DYNAMICOBJECT_CASTER" },
    { "CGDynamicObjectData::m_typeAndVisualID", "DYNAMICOBJECT_BYTES" },
    { "CGDynamicObjectData::m_spellID", "DYNAMICOBJECT_SPELLID" },
    { "CGDynamicObjectData::m_radius", "DYNAMICOBJECT_RADIUS" },
    { "CGDynamicObjectData::m_castTime", "DYNAMICOBJECT_CASTTIME" },

    { "CGCorpseData::m_owner", "CORPSE_FIELD_OWNER" },
    { "CGCorpseData::m_partyGUID", "CORPSE_FIELD_PARTY" },
    { "CGCorpseData::m_displayID", "CORPSE_FIELD_DISPLAY_ID" },
    { "CGCorpseData::m_items", "CORPSE_FIELD_ITEM" },
    { "CGCorpseData::m_skinID", "CORPSE_FIELD_BYTES_1" },
    { "CGCorpseData::m_facialHairStyleID", "CORPSE_FIELD_BYTES_2" },
    { "CGCorpseData::m_flags", "CORPSE_FIELD_FLAGS" },
    { "CGCorpseData::m_dynamicFlags", "CORPSE_FIELD_DYNAMIC_FLAGS" },
    { "CGCorpseData::m_factionTemplate", "CORPSE_FIELD_FACTIONTEMPLATE" },

    { "CGAreaTriggerData::m_overrideScaleCurve", "AREATRIGGER_OVERRIDE_SCALE_CURVE" },
    { "CGAreaTriggerData::m_caster", "AREATRIGGER_CASTER" },
    { "CGAreaTriggerData::m_duration", "AREATRIGGER_DURATION" },
    { "CGAreaTriggerData::m_timeToTargetScale", "AREATRIGGER_TIME_TO_TARGET_SCALE" },
    { "CGAreaTriggerData::m_spellID", "AREATRIGGER_SPELLID" },
    { "CGAreaTriggerData::m_spellVisualID", "AREATRIGGER_SPELLVISUALID" },
    { "CGAreaTriggerData::m_boundsRadius2D", "AREATRIGGER_BOUNDS_RADIUS_2D" },
    { "CGAreaTriggerData::m_explicitScale", "AREATRIGGER_EXPLICIT_SCALE" },

    { "CGSceneObjectData::m_scriptPackageID", "SCENEOBJECT_FIELD_SCRIPT_PACKAGE_ID" },
    { "CGSceneObjectData::m_rndSeedVal", "SCENEOBJECT_FIELD_RND_SEED_VAL" },
    { "CGSceneObjectData::m_createdBy", "SCENEOBJECT_FIELD_CREATEDBY" },
    { "CGSceneObjectData::m_sceneType", "SCENEOBJECT_FIELD_SCENE_TYPE" },

    { "CGConversationData::dummy", "CONVERSATION_FIELD_DUMMY" },

    { "CGConversationDynamicData::m_actors", "CONVERSATION_DYNAMIC_FIELD_ACTORS" },
    { "CGConversationDynamicData::m_lines", "CONVERSATION_DYNAMIC_FIELD_LINES" }
};

char const* GetOldName(char const* newName)
{
    for (int i = 0; i < NUM_NAMES; ++i)
        if (!strcmp(NameMap[i].NewName, newName))
            return NameMap[i].OldName;

    return newName;
}
