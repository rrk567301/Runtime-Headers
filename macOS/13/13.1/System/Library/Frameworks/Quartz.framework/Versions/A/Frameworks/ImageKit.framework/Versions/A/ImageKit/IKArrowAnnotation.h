@interface IKArrowAnnotation : IKAnnotation {
    double _lineWidth;
    BOOL _arrowAtStart;
    BOOL _arrowAtEnd;
}

- (void)drawInContext:(struct CGContext { } *)a0;
- (void)setup:(id)a0;
- (void)toggleArrowAtStart;
- (void)toggleArrowAtEnd;
- (void)updateBorderWidth:(int)a0;
- (void)setAnchorPointAndKeepFrame:(struct CGPoint { double x0; double x1; })a0;
- (unsigned int)defaultKnob;
- (unsigned int)knobLayerFlags;
- (void)changeBackgroundColor:(id)a0;

@end
