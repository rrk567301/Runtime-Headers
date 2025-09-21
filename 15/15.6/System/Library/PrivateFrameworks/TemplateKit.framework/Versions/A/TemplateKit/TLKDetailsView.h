@class NSArray, NSString, NSView, TLKImage, TLKTextAreaView, TLKRichText;
@protocol TLKDetailsViewDelegate;

@interface TLKDetailsView : TLKView <TLKTextAreaViewDelegate>

@property (retain, nonatomic) TLKTextAreaView *contentView;
@property (nonatomic) char useCompactMode;
@property (retain, nonatomic) TLKRichText *bannerBadge;
@property (retain, nonatomic) TLKRichText *topText;
@property (retain, nonatomic) TLKRichText *title;
@property (nonatomic) char truncateTitleMiddle;
@property (weak, nonatomic) id<TLKDetailsViewDelegate> delegate;
@property (retain, nonatomic) TLKRichText *secondaryTitle;
@property (nonatomic) char secondaryTitleIsDetached;
@property (retain, nonatomic) TLKImage *secondaryTitleImage;
@property (retain, nonatomic) NSArray *details;
@property (nonatomic) char truncateDetailsMiddle;
@property (retain, nonatomic) TLKRichText *footnote;
@property (retain, nonatomic) NSString *footnoteButtonText;
@property (retain, nonatomic) NSView *accessoryView;
@property (nonatomic) char isAccessoryViewBottomAligned;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)performBatchUpdates:(id /* block */)a0;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (id)titleContainer;
- (id)detailsFields;
- (id)footnoteLabel;
- (void)layoutMarginsDidChange;
- (id)detailsStrings;
- (id)footnoteButton;
- (void)footnoteButtonPressed;
- (id)footnoteContainer;
- (id)footnoteLabelString;
- (id)setupContentView;

@end
