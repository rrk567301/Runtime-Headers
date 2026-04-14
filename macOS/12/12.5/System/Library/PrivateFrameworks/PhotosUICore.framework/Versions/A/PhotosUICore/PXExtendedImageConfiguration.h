@class NSString, NSBundle, NSImageSymbolConfiguration, NSColor;

@interface PXExtendedImageConfiguration : NSObject

@property (readonly, nonatomic) NSString *imageName;
@property (readonly, nonatomic) BOOL isSystemImage;
@property (readonly, nonatomic) NSColor *tintColor;
@property (readonly, nonatomic) NSImageSymbolConfiguration *imageConfiguration;
@property (readonly, nonatomic) NSBundle *bundle;

- (id)init;
- (void).cxx_destruct;
- (id)initWithImageName:(id)a0 isSystemImage:(BOOL)a1 tintColor:(id)a2 imageConfiguration:(id)a3 inBundle:(id)a4;
- (id)initWithImageName:(id)a0;
- (id)initWithImageName:(id)a0 isSystemImage:(BOOL)a1;

@end
