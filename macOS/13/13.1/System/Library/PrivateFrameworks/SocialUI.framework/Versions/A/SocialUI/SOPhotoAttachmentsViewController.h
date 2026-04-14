@class IKImageBrowserView;

@interface SOPhotoAttachmentsViewController : SOAttachmentsViewController

@property (retain) IKImageBrowserView *imageBrowserView;

- (void).cxx_destruct;
- (BOOL)validateMenuItem:(id)a0;
- (void)loadView;
- (void)viewDidAppear;
- (unsigned long long)numberOfItemsInImageBrowser:(id)a0;
- (id)imageBrowser:(id)a0 itemAtIndex:(unsigned long long)a1;
- (id)imageBrowser:(id)a0 pasteboardWriterForItemAtIndex:(unsigned long long)a1;
- (void)imageBrowser:(id)a0 cellWasRightClickedAtIndex:(unsigned long long)a1 withEvent:(id)a2;
- (void)chatDisplayControllerWillChange:(id)a0;
- (void)attachmentsDidChange;
- (id)actionableIndexes:(id)a0;
- (void)_openImageBrowserSelection;
- (void)_importSelectionToIPhoto;
- (void)_deleteSelection;
- (void)setUpImageBrowser;

@end
