@class CALayer, PDFDocument;

@interface PDFIconView : NSCollectionViewItem {
    PDFDocument *_document;
    int _pageIndex;
    BOOL _needsUpdate;
    CALayer *_imageSelectionLayer;
    CALayer *_textSelectionLayer;
}

- (void)setNeedsUpdate;
- (void)viewDidLoad;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)updateAsPageIndex:(int)a0 forDocument:(id)a1;

@end
