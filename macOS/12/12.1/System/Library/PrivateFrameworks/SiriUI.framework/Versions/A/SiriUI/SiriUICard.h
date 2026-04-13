@class NSView, NSString, AFDataStore, SiriUITranscriptItem, SiriUISnippetViewController, NSStackView, SiriUISnippetControllerCell, SiriUICardContentViewController, NSImage, SiriUICardHeaderViewController, SiriUICardView, NCCardViewController;
@protocol SiriUICardDelegate;

@interface SiriUICard : SiriUICollectionViewItem <NSPasteboardWriting, SiriUICardHeaderViewControllerDelegate, SiriUIAccessibilityStashDelegate>

@property (weak) NSStackView *containerView;
@property (readonly) NSImage *dragOutImage;
@property (readonly) SiriUISnippetViewController *snippetViewController;
@property BOOL hasSash;
@property (weak) NSView *cardContent;
@property (weak) NSView *supplementaryHeaderView;
@property (retain, nonatomic) SiriUICardHeaderViewController *headerController;
@property (retain) SiriUICardContentViewController *contentController;
@property (retain) NCCardViewController *cardViewController;
@property (readonly) NSString *summaryTitle;
@property (readonly) NSString *summaryImagePath;
@property (readonly) SiriUITranscriptItem *transcriptItem;
@property (weak) SiriUISnippetControllerCell *cellView;
@property (weak, nonatomic) id<SiriUICardDelegate> delegate;
@property (retain) AFDataStore *dataStore;
@property (weak) SiriUICardView *cardView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)headerHeight;
+ (id)mostRecentSummaryTitle;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setRepresentedObject:(id)a0;
- (id)nibBundle;
- (id)writableTypesForPasteboard:(id)a0;
- (id)pasteboardPropertyListForType:(id)a0;
- (unsigned long long)writingOptionsForType:(id)a0 pasteboard:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear;
- (id)draggingImageComponents;
- (void)stash;
- (id)snippetIdentifierForGroupName:(id)a0;
- (id)_dragOutURL;
- (id)_dragOutURLName;
- (BOOL)allowsStashingCardView:(id)a0;
- (void)stashCardView:(id)a0;
- (id)_createReusableViewIfNeededWithClass:(Class)a0 snippetViewController:(id)a1;

@end
