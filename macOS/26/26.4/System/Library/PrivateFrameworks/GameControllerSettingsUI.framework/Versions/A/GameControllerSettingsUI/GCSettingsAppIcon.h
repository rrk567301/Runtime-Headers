@class IFImage, NSImage;

@interface GCSettingsAppIcon : NSObject {
    IFImage *_isImage;
    NSImage *_nsImage;
}

+ (void)clearCache;
+ (id)appIconImageForBundleIdentifier:(id)a0;
+ (id)iconImageForType:(id)a0;

- (void).cxx_destruct;
- (id)NSImage;
- (id)initWithISImage:(id)a0;

@end
