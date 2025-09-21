@class NSArray, NSDictionary, NSImage, VUIMediaTagsViewLayout, NSString;

@interface VUIMediaTagsView : VUIBaseView <VUIRentalExpirationLabelDelegate, VUILabelBaselineProtocol>

@property (copy, nonatomic) NSDictionary *viewsMap;
@property (retain, nonatomic) NSArray *groupedSubviews;
@property (nonatomic) double totalSubviewsWidth;
@property (nonatomic) char isSelected;
@property (retain, nonatomic) NSImage *commonSenseLightImage;
@property (retain, nonatomic) NSImage *commonSenseDarkImage;
@property (readonly, nonatomic) VUIMediaTagsViewLayout *tagsViewLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double vuiBaselineHeight;

+ (id)tagsViewWithMetadata:(id)a0 layout:(id)a1 existingView:(id)a2;

- (void).cxx_destruct;
- (void)reset;
- (double)firstBaselineOffsetFromTop;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateWithMetadata:(id)a0;
- (double)bottomMarginWithBaselineMargin:(double)a0;
- (void)_adjustGenresLabelWidthIfNeeded;
- (char)_shouldApplyTintColor:(id)a0 forImage:(id)a1;
- (void)_addGenreLabelAndSeparator;
- (void)_adjustViewsPositionFor:(id)a0 preferredSize:(struct CGSize { double x0; double x1; })a1;
- (void)_adjustViewsPositionFor:(id)a0 topPadding:(double)a1;
- (id)_firstLabelSubview;
- (struct CGSize { double x0; double x1; })_layoutSubviewsForSize:(struct CGSize { double x0; double x1; })a0 computationOnly:(char)a1;
- (id)_newGenresLabel:(id)a0 textLayout:(id)a1;
- (id)_newImageViewAsSubview:(char)a0;
- (id)_newLabelAsSubview:(id)a0 textLayout:(id)a1;
- (id)_newLabelAsSubview:(id)a0 withAttributedString:(id)a1 textLayout:(id)a2;
- (id)_newRentalExpirationlabel:(id)a0 exisitingLabel:(id)a1;
- (id)_newTextBadgeViewAsSubview:(id)a0 layout:(id)a1 withString:(id)a2;
- (void)_removeGenreLabelAndSeparator;
- (void)_removeSeparatorsFromGroupsIfNeeded:(char)a0;
- (id)_textLayoutForKey:(id)a0;
- (double)_totalSubviewsWidth;
- (void)_updateAppearanceWithUserInterfaceStyle:(unsigned long long)a0;
- (void)_updateImageAppearanceWithUserInterfaceStyle:(unsigned long long)a0;
- (void)_updateTagsVisibilityForSize:(struct CGSize { double x0; double x1; })a0;
- (double)bottomMarginToLabel:(id)a0 withBaselineMargin:(double)a1;
- (char)elementsArePlacedOnIndividualLines;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layout:(id)a1;
- (void)rentalExpirationLabelNeedsRelayout:(id)a0;
- (double)topMarginToLabel:(id)a0 withBaselineMargin:(double)a1;
- (double)topMarginWithBaselineMargin:(double)a0;
- (double)vui_baselineOffsetFromBottom;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(char)a1;
- (void)vui_setSelected:(char)a0 animated:(char)a1 withAnimationCoordinator:(void *)a2;

@end
