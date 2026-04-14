@class NSRulerMarker;

@interface NSRulerMarkerView : NSView {
    NSRulerMarker *_rulerMarker;
}

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (BOOL)isFlipped;
- (void)setRulerMarker:(id)a0;
- (id)rulerMarker;
- (void)updateFrame;

@end
