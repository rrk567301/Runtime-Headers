@interface LACLocalizationUtils : NSObject

+ (char)_shouldUseDeviceVariantForKey:(id)a0;
+ (id)decodeLocalizationKeyFromString:(id)a0 shouldUseDeviceVariant:(char *)a1;
+ (id)encodeLocalizationKey:(id)a0;
+ (id)encodeLocalizationKey:(id)a0 shouldUseDeviceVariant:(char)a1;
+ (char)isLocalizationKey:(id)a0;

@end
