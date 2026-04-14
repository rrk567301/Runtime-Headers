@class NSArray, NSDictionary, NSImage, VUIMediaTagsViewLayout, NSString;

@interface VUIMediaTagsView : VUIBaseView <VUIRentalExpirationLabelDelegate, VUILabelBaselineProtocol>

@property (copy, nonatomic) NSDictionary *viewsMap;
@property (retain, nonatomic) NSArray *groupedSubviews;
@property (nonatomic) double totalSubviewsWidth;
@property (retain, nonatomic) NSImage *commonSenseLightImage;
@property (retain, nonatomic) NSImage *commonSenseDarkImage;
@property (readonly, nonatomic) VUIMediaTagsViewLayout *tagsViewLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagsViewWithMetadata:(id)a0 layout:(id)a1 existingView:(id)a2;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)firstBaselineOffsetFromTop;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (double)topMarginWithBaselineMargin:(double)a0;
- (double)bottomMarginWithBaselineMargin:(double)a0;
- (double)topMarginToLabel:(id)a0 withBaselineMargin:(double)a1;
- (double)vui_baselineOffsetFromBottom;
- (void)vui_traitCollectionDidChange:(id)a0;
- (void)rentalExpirationLabelNeedsRelayout:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layout:(id)a1;
- (struct CGSize { double x0; double x1; })_layoutSubviewsForSize:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)_adjustViewsPositionFor:(id)a0 preferredSize:(struct CGSize { double x0; double x1; })a1;
- (double)bottomMarginToLabel:(id)a0 withBaselineMargin:(double)a1;
- (void)updateWithMetadata:(id)a0;
- (id)_firstLabelSubview;
- (id)_newLabelAsSubview:(id)a0;
- (id)_newLabelAsSubview:(id)a0 withAttributedString:(id)a1;
- (BOOL)_shouldApplyTintColor:(id)a0 forImage:(id)a1;
- (id)_newImageViewAsSubview:(BOOL)a0;
- (id)_newTextBadgeViewAsSubview:(id)a0 layout:(id)a1 withString:(id)a2;
- (id)_newRentalExpirationlabel:(id)a0 exisitingLabel:(id)a1;
- (BOOL)_shouldPutTextOnSeparateLines;
- (void)_updateImageAppearanceWithUserInterfaceStyle:(unsigned long long)a0;
- (void)_updateAppearanceWithUserInterfaceStyle:(unsigned long long)a0;
- (void)_removeSeparatorsFromGroupsIfNeeded:(BOOL)a0;
- (double)_totalSubviewsWidth;
- (void)_removeGenreLabelAndSeparator;
- (void)_addGenreLabelAndSeparator;

@end
