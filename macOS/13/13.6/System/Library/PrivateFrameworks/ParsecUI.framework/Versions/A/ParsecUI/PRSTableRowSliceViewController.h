@class NSArray, PRSTableRowCardSection;

@interface PRSTableRowSliceViewController : PRSCardSectionSliceViewController

@property (retain) NSArray *itemWidths;
@property (retain) NSArray *itemViews;
@property (retain) PRSTableRowCardSection *section;
@property BOOL isCompactRow;
@property BOOL isReducedHeight;
@property long long verticalAlignment;
@property BOOL hasHeaderContent;

+ (double)fontSize;
+ (unsigned long long)imageAlignmentForTextAlignment:(long long)a0;
+ (id)attributedStringFromFormattedText:(id)a0 color:(id)a1 font:(id)a2;
+ (void)centerSectionSpacingBetweenView1:(id)a0;
+ (id)imageViewForView:(id)a0;
+ (id)labelForView:(id)a0;
+ (double)leadingSectionSpacingBetweenView1:(id)a0 view2:(id)a1;
+ (double)trailingSectionSpacingBetweenView1:(id)a0 view2:(id)a1 totalViewsInSection:(long long)a2 totalWidth:(double)a3;

- (void).cxx_destruct;
- (double)height;
- (id)accessibilityLabel;
- (id)font;
- (id)initWithCardSection:(id)a0;
- (BOOL)shouldAllowOtherViewsToOverlap:(id)a0;
- (id)accessibilityTableID;
- (id)addImageViewWithImage:(id)a0;
- (id)addLabelWithAttributedText:(id)a0;
- (long long)getHeightForText:(id)a0 maxSize:(long long)a1 font:(id)a2;
- (id)initWithCardSection:(id)a0 isCompactRow:(BOOL)a1 isReducedHeight:(BOOL)a2;
- (id)initWithCardSection:(id)a0 isCompactRow:(BOOL)a1 isReducedHeight:(BOOL)a2 verticalAlignment:(long long)a3;
- (double)labelBottomBaselineSpacing;
- (double)labelTopBaselineSpacing;
- (BOOL)labelsAreVibrant;
- (id)rowSliceView;
- (void)setAlignment:(long long)a0 forView:(id)a1;
- (void)setupWithLayoutInfo:(id)a0;

@end
