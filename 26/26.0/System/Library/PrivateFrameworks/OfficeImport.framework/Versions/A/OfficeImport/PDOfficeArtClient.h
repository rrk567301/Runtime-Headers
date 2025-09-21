@class OADImageRecolorInfo, NSString, PDAnimationInfo, PDPlaceholder;

@interface PDOfficeArtClient : NSObject <OADClient, OADImageRecolorInfoClient> {
    OADImageRecolorInfo *mImageRecolorInfo;
    PDPlaceholder *mPlaceholder;
    BOOL mIsComment;
    PDAnimationInfo *mAnimationInfo;
    BOOL mHasOleChart;
}

@property (nonatomic) int inheritedTextStylePlaceholderType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (BOOL)hasPlaceholder;
- (id)placeholder;
- (void)setPlaceholder:(id)a0;
- (id)init;
- (BOOL)hasBounds;
- (void).cxx_destruct;
- (void)setHasOleChart:(BOOL)a0;
- (id)animationInfo;
- (BOOL)hasAnimationInfo;
- (BOOL)hasOleChart;
- (id)imageRecolorInfo;
- (BOOL)isComment;
- (void)setAnimationInfo:(id)a0;
- (void)setImageRecolorInfo:(id)a0;
- (void)setIsComment:(BOOL)a0;

@end
