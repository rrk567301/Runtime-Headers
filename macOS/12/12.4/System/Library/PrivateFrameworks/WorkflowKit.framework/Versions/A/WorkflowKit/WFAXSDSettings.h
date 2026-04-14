@interface WFAXSDSettings : NSObject

+ (BOOL)soundDetectionEnabled;
+ (id)localizedNameForSoundDetectionType:(id)a0;
+ (id)bmTypeForAXSDSoundDetectionType:(id)a0;
+ (BOOL)isApplianceSoundDetectionType:(id)a0;
+ (id)mapLocalizedSupportedSoundDetectionTypesUsingBlock:(id /* block */)a0;

@end
