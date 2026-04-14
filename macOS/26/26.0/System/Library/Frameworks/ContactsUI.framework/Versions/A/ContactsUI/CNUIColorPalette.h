@class NSScrollView, NSStackView, NSArray;
@protocol CNUIColorPaletteDelegate;

@interface CNUIColorPalette : NSControl

@property (retain) NSScrollView *scrollView;
@property (retain) NSStackView *stackView;
@property (retain) NSArray *colorButtons;
@property double swatchSize;
@property double swatchSpacing;
@property (weak) id<CNUIColorPaletteDelegate> delegate;
@property (copy, nonatomic) NSArray *colors;
@property (nonatomic) unsigned long long indexForSelectedColor;

- (id)initWithColors:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void).cxx_destruct;
- (void)selectColor:(id)a0;
- (void)_commonInitWithSwatchSize:(double)a0 swatchSpacing:(double)a1 colors:(id)a2;
- (id)initWithColors:(id)a0 swatchSize:(double)a1 swatchSpacing:(double)a2;

@end
