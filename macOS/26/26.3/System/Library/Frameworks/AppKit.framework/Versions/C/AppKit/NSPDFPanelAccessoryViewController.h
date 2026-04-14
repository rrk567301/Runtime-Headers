@class NSGridView, NSViewController, NSPopUpButton, NSSegmentedControl;

@interface NSPDFPanelAccessoryViewController : NSViewController {
    NSViewController *_customAccessoryViewController;
    NSPopUpButton *_pageSizePopup;
    NSGridView *_pageAndOrientationContainer;
    NSSegmentedControl *_orientationControl;
    BOOL _showOrientation;
    BOOL _showPaperSize;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)dealloc;
- (void)loadView;
- (id)pdfInfo;
- (id)_printInfo;
- (void)_setPrintInfo:(id)a0;
- (void)awakeFromNib;
- (void)changeOrientation:(id)a0;
- (void)changePaper:(id)a0;
- (id)initWithOptions:(long long)a0 customAccessoryViewController:(id)a1;
- (id)populateMenu:(id)a0 withPaperList:(id)a1;

@end
