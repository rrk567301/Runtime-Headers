@class NSTextField, AKController, NSView, NSString, NSLayoutConstraint, NSButton, AKSignatureCaptureViewController_Mac, NSTableView;

@interface AKSignaturesViewController_Mac : NSViewController <AKSignatureCaptureViewControllerDelegate, AKSignatureTableViewEventDelegate, AKSignatureTableCellViewDelegate, AKUserInterfaceItem> {
    AKSignatureCaptureViewController_Mac *_captureViewController;
    double _signaturesListWidth;
    double _tableViewBottomConstant;
}

@property (retain) NSTableView *tableView;
@property (retain) NSView *containerView;
@property (retain) NSButton *createSignatureButton;
@property (retain) NSLayoutConstraint *tableTrailingSpaceConstraint;
@property (retain) NSTextField *warningTextField;
@property (weak) AKController *controller;
@property (copy) id /* block */ completionHandler;
@property (weak) id presentingContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (long long)tag;
- (id)initWithController:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (id)tableView:(id)a0 rowViewForRow:(long long)a1;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)popoverWillClose:(id)a0;
- (void)popoverDidClose:(id)a0;
- (void)viewDidLoad;
- (id)signatures;
- (id)_captureView;
- (void)tableView:(id)a0 didClickRow:(long long)a1;
- (void)didPressReturnOnTableView:(id)a0;
- (void)deleteSelectedSignatureOnTableView:(id)a0;
- (void)insertSelectedSignatureOnTableView:(id)a0;
- (void)captureControllerDidFinish:(id)a0;
- (void)captureController:(id)a0 willHide:(BOOL)a1;
- (void)insertSignatureFromTableCellView:(id)a0;
- (void)_setupListViewForNoCaptureAvailable;
- (struct CGSize { double x0; double x1; })idealContentSize;
- (void)showAddSignatureView:(id)a0;
- (void)switchToViewMode:(long long)a0 animated:(BOOL)a1;
- (void)_animate:(BOOL)a0 toContentView:(id)a1 startingSize:(struct CGSize { double x0; double x1; })a2 destinationSize:(struct CGSize { double x0; double x1; })a3;
- (void)_animatePopoverToNewSize;
- (void)deleteSignature:(id)a0;
- (void)_deleteSignatureCellView:(id)a0 inTableView:(id)a1;
- (void)_chooseSignatureRow:(long long)a0 fromTableView:(id)a1;

@end
