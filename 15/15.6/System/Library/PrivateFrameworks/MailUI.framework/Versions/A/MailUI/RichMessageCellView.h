@class NSTextField, NSString, NSImageView, NSLayoutConstraint, NSStackView, NSMutableArray;

@interface RichMessageCellView : MUIRichMessageCellBase <MUIReusableIdentifiable> {
    char _showSize;
    char _showMailbox;
    char _showSnippetHighlighting;
    unsigned long long _numberOfSnippetLines;
}

@property (class, readonly, copy, nonatomic) NSString *reusableIdentifier;

@property (readonly, nonatomic) char isOpen;
@property (readonly, nonatomic) unsigned long long threadCount;
@property (retain, nonatomic) NSTextField *mailboxView;
@property (retain, nonatomic) NSTextField *sizeView;
@property (retain, nonatomic) NSStackView *flagsStackView;
@property (retain, nonatomic) NSImageView *singleStatusImageView;
@property (readonly, nonatomic) NSMutableArray *flagViews;
@property (retain, nonatomic) NSLayoutConstraint *senderLeadingToSuperviewConstraint;
@property (retain, nonatomic) NSLayoutConstraint *subjectMailboxConstraint;
@property (retain, nonatomic) NSLayoutConstraint *statusMailboxConstraint;
@property (retain, nonatomic) NSLayoutConstraint *statusDateConstraint;
@property (retain, nonatomic) NSLayoutConstraint *subjectBottomConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)_calculateRowHeightUsingTextField:(id)a0;
+ (id)keyPathsForValuesAffectingIsOpen;
+ (id)keyPathsForValuesAffectingThreadCount;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void)setObjectValue:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (char)acceptsFirstResponder;
- (void)awakeFromNib;
- (char)canBecomeKeyView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBackgroundStyle:(long long)a0;
- (void)viewWillMoveToWindow:(id)a0;
- (void)setShowSize:(char)a0;
- (char)showSize;
- (void)_updateMutedIndicatorWithImage:(id)a0;
- (void)setShowMailbox:(char)a0;
- (void)_setSymbolFonts;
- (void)_updateAttachmentViewWithImage:(id)a0;
- (void)_richTableCellViewCommonInit;
- (void)_setSnippetHidden:(char)a0;
- (void)_updateAvatarViewWithContacts:(id)a0;
- (void)_updateCategorizationString;
- (void)_updateExtensionIndicatorWithImage:(id)a0;
- (void)_updateFlagViewsWithImages:(id)a0;
- (void)_updateHasGeneratedSummary:(id)a0;
- (void)_updateMailboxLabel;
- (void)_updateReadLaterIndicatorWithImage:(id)a0;
- (void)_updateReplyButtonWithImage:(id)a0;
- (void)_updateSingleStatusColor:(id)a0;
- (void)_updateSizeLabelWithSize:(id)a0;
- (void)_updateSnippetHighlightingStyle:(char)a0;
- (void)_updateStatusViewWithImage:(id)a0;
- (void)_updateThreadControlWithThreadCount:(unsigned long long)a0;
- (void)_updateTimeSensitiveIndicatorWithImage:(id)a0;
- (void)_updateUnreadIndicatorWithImage:(id)a0;
- (void)_updateVIPIndicatorWithImage:(id)a0;
- (unsigned long long)numberOfSnippetLines;
- (void)setNumberOfSnippetLines:(unsigned long long)a0;
- (void)setShowSnippetHighlighting:(char)a0;
- (char)showMailbox;
- (char)showSnippetHighlighting;
- (void)updateFontsUsingBold:(char)a0;

@end
