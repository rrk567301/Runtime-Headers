@class NSString, NSBundle, NSImageSymbolConfiguration, NSColor;

@interface PXExtendedImageConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *imageName;
@property (readonly, nonatomic) BOOL isSystemImage;
@property (readonly, nonatomic) NSString *accessibilityLabel;
@property (readonly, nonatomic) NSColor *tintColor;
@property (readonly, nonatomic) NSImageSymbolConfiguration *imageConfiguration;
@property (readonly, nonatomic) NSBundle *bundle;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithImageName:(id)a0;
- (void).cxx_destruct;
- (id)initWithImageName:(id)a0 inBundle:(id)a1;
- (id)initWithImageName:(id)a0 isSystemImage:(BOOL)a1 accessibilityLabel:(id)a2 tintColor:(id)a3 imageConfiguration:(id)a4 inBundle:(id)a5;
- (id)initWithImageName:(id)a0 isSystemImage:(BOOL)a1;

@end
