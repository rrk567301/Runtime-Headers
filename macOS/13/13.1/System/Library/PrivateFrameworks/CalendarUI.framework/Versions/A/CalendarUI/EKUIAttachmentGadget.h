@class NSView, NSString, NSArray, NSSet, EKUIAttachmentTableView, NSDictionary, EKAttachment, EKUITextButton, NSLayoutConstraint;

@interface EKUIAttachmentGadget : EKUIIsolateableSingleViewGadget <QLSeamlessOpenerDelegate, QLPreviewPanelDelegate, QLPreviewPanelDataSource, CalUIResizingTextFieldDelegate, NSTableViewDelegate, NSTableViewDataSource> {
    NSSet *_attachmentPreviewURLs;
}

@property (retain) NSArray *attachments;
@property (retain) EKUITextButton *addButton;
@property (retain) NSLayoutConstraint *heightConstraint;
@property (retain) EKUIAttachmentTableView *tableView;
@property (retain) NSView *container;
@property (retain) NSArray *attachmentConstraints;
@property (retain) NSDictionary *viewMetrics;
@property (weak) EKAttachment *selectedAttachment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interestedChangeKeys;

- (void)dealloc;
- (BOOL)hasData;
- (void).cxx_destruct;
- (long long)rowHeight;
- (void)updateConstraints;
- (BOOL)performDragOperation:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (BOOL)isEditable;
- (id)initWithViewController:(id)a0;
- (void)setExpanded:(BOOL)a0;
- (long long)_numberOfRows;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })seamlessOpener:(id)a0 sourceFrameOnScreenForPreviewItem:(id)a1;
- (id)seamlessOpener:(id)a0 transitionImageForPreviewItem:(id)a1 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)a0;
- (id)previewPanel:(id)a0 previewItemAtIndex:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewPanel:(id)a0 sourceFrameOnScreenForPreviewItem:(id)a1;
- (id)previewPanel:(id)a0 transitionImageForPreviewItem:(id)a1 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (id)control;
- (void)removeAttachment:(id)a0;
- (BOOL)shouldDisplay;
- (void)viewControllerViewWillAppear;
- (void)viewControllerViewDidDisappear;
- (double)horizontalInset;
- (id)claimedPboardTypes;
- (void)updateWithChanges:(id)a0;
- (BOOL)wantsToDisplay;
- (BOOL)_shouldShowPlusButton;
- (void)_launchFilePicker:(id)a0;
- (void)syncCachedAttachments;
- (void)downloadAttachments;
- (void)downloadAttachment:(id)a0;
- (void)downloadAttachment:(id)a0 withAccount:(id)a1;
- (void)refreshAttachment:(id)a0;
- (void)_addAttachmentsWithURLs:(id)a0;
- (BOOL)_shouldShowAddAttachmentsLabel;
- (id)downloadedAttachmentsForQuickLook;
- (BOOL)quickLookSelectedFiles;
- (BOOL)_updateQLPanelToCurrentSelection:(id)a0;
- (void)updateActiveQLDelegate;
- (void)prepareAllAttachmentsForQuickLook;
- (void)_prepareAttachmentsForQuickLook:(id)a0;

@end
