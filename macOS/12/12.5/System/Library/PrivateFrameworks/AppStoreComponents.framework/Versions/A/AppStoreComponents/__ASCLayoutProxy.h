@class NSString, JUTraitCollection;

@interface __ASCLayoutProxy : NSObject {
    void /* unknown type, empty encoding */ base;
}

@property (class, nonatomic, readonly) double offerButtonHeight;
@property (class, nonatomic, readonly) double offerProgressDiameter;
@property (class, nonatomic, readonly) double axOfferButtonHeight;
@property (class, nonatomic, readonly) double offerButtonRegularWidth;
@property (class, nonatomic, readonly) double offerButtonFixedHeight;
@property (class, nonatomic, readonly) JUTraitCollection *traitCollectionForMainScreen;

@property (nonatomic, readonly) NSString *description;

+ (id)traitCollectionForView:(id)a0;
+ (id)offerEmptyLayoutWithImageView:(id)a0 titleView:(id)a1 subtitleView:(id)a2;
+ (id)offerTextLayoutWithTitleBackgroundView:(id)a0 titleView:(id)a1 subtitleView:(id)a2 hasTrailingSubtitle:(BOOL)a3 shouldTopAlign:(BOOL)a4;
+ (id)offerIconLayoutWithImageView:(id)a0 titleView:(id)a1 subtitleView:(id)a2 hasTrailingSubtitle:(BOOL)a3 shouldTopAlign:(BOOL)a4;
+ (id)preferredFontDescriptorForTextStyle:(id)a0 compatibleWithTraitCollection:(id)a1;
+ (id)traitEnvironmentWithTraitCollection:(id)a0;
+ (id)lockupLayoutOfSize:(id)a0 traitCollection:(id)a1 artworkView:(id)a2 headingText:(id)a3 titleText:(id)a4 subtitleText:(id)a5 offerText:(id)a6 offerButton:(id)a7;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectWithLayoutDirectionForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inTraitEnvironment:(id)a1 relativeTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (id)tvTextPillOverlayWithBackgroundView:(id)a0 textView:(id)a1;
+ (struct CGSize { double x0; double x1; })smallOfferButtonLockupEstimatedSizeFittingSize:(struct CGSize { double x0; double x1; })a0 compatibleWithTraitCollection:(id)a1;
+ (struct CGSize { double x0; double x1; })smallLockupEstimatedSizeFittingSize:(struct CGSize { double x0; double x1; })a0 compatibleWithTraitCollection:(id)a1;
+ (struct CGSize { double x0; double x1; })mediumLockupEstimatedSizeFittingSize:(struct CGSize { double x0; double x1; })a0 compatibleWithTraitCollection:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })measuredSizeFittingSize:(struct CGSize { double x0; double x1; })a0 inTraitEnvironment:(id)a1;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentInsetsInTraitEnvironment:(id)a0;
- (void)placeChildrenRelativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inTraitEnvironment:(id)a1;

@end
