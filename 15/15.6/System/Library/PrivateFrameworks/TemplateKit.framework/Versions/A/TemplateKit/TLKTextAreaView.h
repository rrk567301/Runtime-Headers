@class TLKImage, TLKEmbossedLabel, NSMutableArray, TLKLabel, NSString, TLKRichTextField, TLKTitleContainerView, NUIContainerStackView, NSArray, TLKRichText, NSView, TLKTextButton, TLKStackView;
@protocol TLKTextAreaViewDelegate;

@interface TLKTextAreaView : TLKView <NUIContainerViewDelegate, TLKTextAreaViewTesting>

@property (retain, nonatomic) TLKStackView *contentView;
@property (retain, nonatomic) TLKEmbossedLabel *bannerBadgeView;
@property (retain, nonatomic) TLKRichTextField *topTextField;
@property (retain, nonatomic) TLKTitleContainerView *titleContainer;
@property (retain, nonatomic) NUIContainerStackView *detailFieldFootnoteAndAccessoryStackView;
@property (retain, nonatomic) NUIContainerStackView *detailFieldAndFootnoteStackView;
@property (retain, nonatomic) NUIContainerStackView *detailFieldStackView;
@property (retain, nonatomic) NSMutableArray *detailsFields;
@property (retain, nonatomic) NSMutableArray *bulletFields;
@property (retain, nonatomic) TLKLabel *hyphenField;
@property (retain, nonatomic) TLKRichTextField *footnoteLabel;
@property (retain, nonatomic) TLKTextButton *footnoteButton;
@property (retain, nonatomic) NUIContainerStackView *footnoteContainer;
@property (nonatomic) char disableAllObservers;
@property (nonatomic) char isHorizontallyCompressed;
@property (nonatomic) long long backgroundStyle;
@property (weak) id<TLKTextAreaViewDelegate> buttonDelegate;
@property (retain, nonatomic) TLKRichText *bannerText;
@property (retain, nonatomic) TLKRichText *topText;
@property (retain, nonatomic) TLKRichText *title;
@property (nonatomic) char truncateTitleMiddle;
@property (retain, nonatomic) TLKRichText *secondaryTitle;
@property (retain, nonatomic) TLKImage *secondaryTitleImage;
@property (nonatomic) char secondaryTitleIsDetached;
@property (retain, nonatomic) NSArray *detailTexts;
@property (nonatomic) char truncateDetailsMiddle;
@property (retain, nonatomic) TLKRichText *footnote;
@property (retain, nonatomic) NSString *footnoteButtonText;
@property (retain, nonatomic) NSView *accessoryView;
@property (nonatomic) char isAccessoryViewBottomAligned;
@property (nonatomic) char useCompactMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)footNoteLabelFont;

- (void).cxx_destruct;
- (void)performBatchUpdates:(id /* block */)a0;
- (id)titleView;
- (void)containerView:(id)a0 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x0; double x1; })a1 forReason:(long long)a2;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (id)detailsStrings;
- (id)detailsViews;
- (id)footnoteLabelString;
- (void)insertDetailsStackViewIfNeeded;
- (void)internalTextFieldsInBatchUpdate:(char)a0;
- (void)propertiesDidChange;
- (id)secondaryTitleLabelString;
- (void)settruncateDetailsMiddle:(char)a0;
- (id)setupContentView;
- (id)titleLabelString;
- (void)updateBannerBadge;
- (void)updateDetailFieldStackViewVisibility;
- (void)updateDetails;
- (void)updateFootnote;

@end
