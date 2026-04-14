@class OITSUColor;

@interface MFPSolidBrush : MFPBrush {
    OITSUColor *mColor;
}

- (void)setColor:(id)a0;
- (id)color;
- (void).cxx_destruct;
- (id)initWithColor:(id)a0;
- (void)fillPath:(id)a0;

@end
