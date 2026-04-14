@class OITSUColor;

@interface MFPSolidBrush : MFPBrush {
    OITSUColor *mColor;
}

- (void)setColor:(id)a0;
- (id)color;
- (id)initWithColor:(id)a0;
- (void).cxx_destruct;
- (void)fillPath:(id)a0;

@end
