@class NSView, NSString, NSArray, NSSet, EKUIAttachmentTableView, NSDictionary, EKUITextButton, EKAttachment, NSLayoutConstraint, CalUIDividerView;

@interface EKUIAttachmentGadget : EKUIIsolateableSingleViewGadget <QLSeamlessOpenerDelegate, QLPreviewPanelDelegate, QLPreviewPanelDataSource, CalUIResizingTextFieldDelegate, NSTableViewDelegate, NSTableViewDataSource> {
    NSSet *_attachmentPreviewURLs;
}

@property (retain) NSArray *attachments;
@property (retain) EKUITextButton *addButton;
@property (retain) NSLayoutConstraint *heightConstraint;
@property (retain) EKUIAttachmentTableView *tableView;
@property (retain) NSView *container;
@property (retain) CalUIDividerView *separatorView;
@property (retain) NSArray *attachmentConstraints;
@property (retain) NSDictionary *viewMetrics;
@property (weak) EKAttachment *selectedAttachment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interestedChangeKeys;

- (BOOL)isEditable;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewPanel:(id)a0 sourceFrameOnScreenForPreviewItem:(id)a1;
- (BOOL)hasData;
- (id)initWithViewController:(id)a0;
- (long long)rowHeight;
- (id)previewPanel:(id)a0 transitionImageForPreviewItem:(id)a1 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (id)previewPanel:(id)a0 previewItemAtIndex:(long long)a1;
- (void)updateConstraints;
- (void)setExpanded:(BOOL)a0;
- (void).cxx_destruct;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)a0;
- (long long)_numberOfRows;
- (id)iconSymbolName;
- (long long)numberOfRowsInTableView:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })seamlessOpener:(id)a0 sourceFrameOnScreenForPreviewItem:(id)a1;
- (id)seamlessOpener:(id)a0 transitionImageForPreviewItem:(id)a1 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (id)control;
- (void)removeAttachment:(id)a0;
- (void)downloadAttachment:(id)a0 withAccount:(id)a1;
- (double)horizontalInset;
- (void)_addAttachmentsWithURLs:(id)a0;
- (void)_launchFilePicker:(id)a0;
- (void)_prepareAttachmentsForQuickLook:(id)a0;
- (BOOL)_shouldShowAddAttachmentsLabel;
- (BOOL)_shouldShowPlusButton;
- (BOOL)_updateQLPanelToCurrentSelection:(id)a0;
- (id)claimedPboardTypes;
- (void)downloadAttachment:(id)a0;
- (void)downloadAttachments;
- (id)downloadedAttachmentsForQuickLook;
- (void)prepareAllAttachmentsForQuickLook;
- (BOOL)quickLookSelectedFiles;
- (void)refreshAttachment:(id)a0;
- (BOOL)requirePromptToDownloadAttachment:(id)a0;
- (BOOL)shouldDisplay;
- (void)syncCachedAttachments;
- (void)updateActiveQLDelegate;
- (void)updateWithChanges:(id)a0;
- (void)viewControllerViewDidDisappear;
- (void)viewControllerViewWillAppear;
- (BOOL)wantsToDisplay;

@end
