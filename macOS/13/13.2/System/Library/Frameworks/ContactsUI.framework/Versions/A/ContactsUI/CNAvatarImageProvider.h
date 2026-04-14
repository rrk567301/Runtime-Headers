@class NSString;
@protocol CNUIPRLikenessProvider;

@interface CNAvatarImageProvider : NSObject <CNAvatarImageProvider>

@property (readonly, nonatomic) id<CNUIPRLikenessProvider> likenessProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)roundedImageFromSquareImage:(id)a0;
+ (id)setupStateForRenderingImage:(id)a0;
+ (id)offscreenRepForImageWithSize:(struct CGSize { double x0; double x1; })a0;
+ (void)cleanupStateAfterRendering;
+ (id)renderRoundedVersionOfImage:(id)a0 intoBuffer:(id)a1;

@end
