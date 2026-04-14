@class NSString, NSColorPickerPageableNameList, NSColorPickerSpectrumScrollerView;

@interface NSColorPickerPageableNameListScrollView : NSScrollView <NSColorPickerSpectrumScrollerViewDelegate, NSColorPickerSpectrumScrollerViewDataSource> {
    NSColorPickerPageableNameList *picker;
    NSColorPickerSpectrumScrollerView *spectrumView;
    long long _partMouseDown;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_init;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)awakeFromNib;
- (void)_windowChangedKeyState;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)scrollWheel:(id)a0;
- (void)reflectScrolledClipView:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (void)pageDown:(id)a0;
- (void)pageUp:(id)a0;
- (void)pageClicked:(long long)a0 inSpectrumView:(id)a1;
- (long long)currentPageForSpectrumView:(id)a0;
- (long long)pageCountForSpectrumView:(id)a0;
- (id)colorListForSpectrumView:(id)a0;
- (long long)currentPage;
- (BOOL)isPaged;
- (unsigned long long)pageCount;
- (id)colorList;
- (void)refreshScrollers;
- (BOOL)isFirstAndKey;
- (void)updateWithFocusRingForWindowKeyChange;
- (long long)partHit:(id)a0;
- (long long)_partMouseDown;
- (long long)_arrowPlacement;

@end
