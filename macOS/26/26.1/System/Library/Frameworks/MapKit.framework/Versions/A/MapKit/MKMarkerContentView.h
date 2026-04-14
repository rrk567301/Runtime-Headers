@class NSString, NSImage, MKImageView, _MKUILabel, NSColor;

@interface MKMarkerContentView : NSView {
    MKImageView *_imageView;
    _MKUILabel *_label;
}

@property (retain, nonatomic) NSImage *glyphImage;
@property (copy, nonatomic) NSString *glyphText;
@property (nonatomic) double glyphFontSize;
@property (retain, nonatomic) NSColor *glyphTintColor;

- (void)clear;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)clearGlyphImage;
- (void)_updateTintColor;
- (void)clearGlyphText;
- (void)setupGlypLabel;
- (void)setupImageView;

@end
