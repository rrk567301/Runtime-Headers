@interface WFAXSDSettings : NSObject

+ (id)allBMApplianceTypes;
+ (id)bmTypeForAXSDSoundDetectionType:(id)a0;
+ (char)isApplianceSoundDetectionType:(id)a0;
+ (id)localizedNameForSoundDetectionType:(id)a0;
+ (id)mapLocalizedSupportedSoundDetectionTypesUsingBlock:(id /* block */)a0;
+ (char)soundDetectionEnabled;

@end
