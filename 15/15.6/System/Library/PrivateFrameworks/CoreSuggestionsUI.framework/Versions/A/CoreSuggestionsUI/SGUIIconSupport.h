@interface SGUIIconSupport : NSObject

+ (id)_imageWithIcon:(id)a0 imageDescriptor:(id)a1;
+ (id)_spotlightDescriptorWithBorder:(char)a0;
+ (id)iconForCalendarDate:(id)a0 drawBorder:(char)a1;
+ (id)_homeScreenDescriptorWithBorder:(char)a0;
+ (id)_iconImageWithBundleIdentifier:(id)a0 imageDescriptor:(id)a1;
+ (id)homeScreenIconImageWithBundleIdentifier:(id)a0;
+ (id)homeScreenIconImageWithBundleIdentifier:(id)a0 drawBorder:(char)a1;
+ (id)iconForCalendarDate:(id)a0;
+ (id)spotlightIconImageWithBundleIdentifier:(id)a0;
+ (id)spotlightIconImageWithBundleIdentifier:(id)a0 drawBorder:(char)a1;

@end
