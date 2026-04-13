@interface LUIMemoji : NSObject

+ (void)_addRandomPresetForCategory:(long long)a0 toMemoji:(id)a1;
+ (void)_addPresetForCategory:(long long)a0 named:(id)a1 toMemoji:(id)a2;
+ (void)_addColorPresetForCategory:(long long)a0 named:(id)a1 toMemoji:(id)a2;
+ (id)LUIStickerConfigurationForAvatar:(id)a0;
+ (id)LUIMemojiRandom;
+ (id)LUIMemojiAdultFemale;
+ (id)LUIMemojiAdultMale;
+ (id)LUIMemojiChildFemale;
+ (id)LUIPoseForAvatar:(id)a0;

@end
