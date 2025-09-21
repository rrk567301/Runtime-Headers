@class OADImageRecolorInfo, NSString, PDAnimationInfo, PDPlaceholder;

@interface PDOfficeArtClient : NSObject <OADClient, OADImageRecolorInfoClient> {
    OADImageRecolorInfo *mImageRecolorInfo;
    PDPlaceholder *mPlaceholder;
    char mIsComment;
    PDAnimationInfo *mAnimationInfo;
    char mHasOleChart;
}

@property (nonatomic) int inheritedTextStylePlaceholderType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)placeholder;
- (void)setPlaceholder:(id)a0;
- (char)hasBounds;
- (char)hasPlaceholder;
- (void)setHasOleChart:(char)a0;
- (id)animationInfo;
- (char)hasAnimationInfo;
- (char)hasOleChart;
- (id)imageRecolorInfo;
- (char)isComment;
- (void)setAnimationInfo:(id)a0;
- (void)setImageRecolorInfo:(id)a0;
- (void)setIsComment:(char)a0;

@end
