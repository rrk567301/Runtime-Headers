@interface NotesEditor.TextCorrectionMarkerView : NSView {
    void /* unknown type, empty encoding */ textView;
    void /* unknown type, empty encoding */ markers;
    void /* unknown type, empty encoding */ minimumMarkerWidth;
    void /* unknown type, empty encoding */ markerYOffset;
}

@property (nonatomic, readonly) BOOL flipped;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)textViewLayoutDidChange:(id)a0;

@end
