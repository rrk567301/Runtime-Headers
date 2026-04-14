@class NSArray, NSString, NSView, TLKImage, TLKTextAreaView, TLKRichText;
@protocol TLKDetailsViewDelegate;

@interface TLKDetailsView : TLKView <TLKTextAreaViewDelegate>

@property (retain, nonatomic) TLKTextAreaView *contentView;
@property (nonatomic) BOOL useCompactMode;
@property (retain, nonatomic) TLKRichText *bannerBadge;
@property (retain, nonatomic) TLKRichText *topText;
@property (retain, nonatomic) TLKRichText *title;
@property (nonatomic) BOOL truncateTitleMiddle;
@property (weak, nonatomic) id<TLKDetailsViewDelegate> delegate;
@property (retain, nonatomic) TLKRichText *secondaryTitle;
@property (nonatomic) BOOL secondaryTitleIsDetached;
@property (retain, nonatomic) TLKImage *secondaryTitleImage;
@property (retain, nonatomic) NSArray *details;
@property (nonatomic) BOOL truncateDetailsMiddle;
@property (retain, nonatomic) TLKRichText *footnote;
@property (retain, nonatomic) NSString *footnoteButtonText;
@property (retain, nonatomic) NSView *accessoryView;
@property (nonatomic) BOOL isAccessoryViewBottomAligned;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewForLastBaselineLayout;
- (void)layoutMarginsDidChange;
- (id)viewForFirstBaselineLayout;
- (void)performBatchUpdates:(id /* block */)a0;
- (id)footnoteLabel;
- (id)footnoteContainer;
- (void).cxx_destruct;
- (id)titleContainer;
- (id)detailsFields;
- (id)detailsStrings;
- (id)footnoteButton;
- (void)footnoteButtonPressed;
- (id)footnoteLabelString;
- (id)setupContentView;

@end
