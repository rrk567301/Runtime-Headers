@class NSView, NSString, NSArray, EKUIAttachmentTableView, NSDictionary, EKAttachment, EKUITextButton, NSLayoutConstraint;

@interface EKUIAttachmentGadget : EKUIIsolateableSingleViewGadget <QLSeamlessOpenerDelegate, QLPreviewPanelDelegate, QLPreviewPanelDataSource, CalUIResizingTextFieldDelegate, NSTableViewDelegate, NSTableViewDataSource>

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

- (BOOL)hasData;
- (void).cxx_destruct;
- (long long)rowHeight;
- (BOOL)isEditable;
- (void)updateConstraints;
- (BOOL)performDragOperation:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (void)setExpanded:(BOOL)a0;
- (long long)_numberOfRows;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })seamlessOpener:(id)a0 sourceFrameOnScreenForPreviewItem:(id)a1;
- (id)seamlessOpener:(id)a0 transitionImageForPreviewItem:(id)a1 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)a0;
- (id)previewPanel:(id)a0 previewItemAtIndex:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewPanel:(id)a0 sourceFrameOnScreenForPreviewItem:(id)a1;
- (id)previewPanel:(id)a0 transitionImageForPreviewItem:(id)a1 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (id)control;
- (id)initWithViewController:(id)a0;
- (void)removeAttachment:(id)a0;
- (BOOL)shouldDisplay;
- (double)horizontalInset;
- (id)claimedPboardTypes;
- (void)updateWithChanges:(id)a0;
- (BOOL)wantsToDisplay;
- (BOOL)_shouldShowPlusButton;
- (BOOL)quickLookSelectedFiles;
- (void)_launchFilePicker:(id)a0;
- (void)syncCachedAttachments;
- (void)downloadAttachments;
- (BOOL)_shouldShowAddAttachmentsLabel;
- (BOOL)_updateQLPanelToCurrentSelection:(id)a0;
- (void)updateActiveQLDelegate;
- (id)downloadedAttachmentsForQuickLook;

@end
