@class OITSUImage, OITSUColor;

@interface MFPImageBrush : MFPBrush {
    OITSUImage *mPhoneImage;
    OITSUColor *mPhonePatternColor;
}

- (void)fillPath:(id)a0;
- (void).cxx_destruct;
- (id)color;
- (id)initWithPhoneImage:(id)a0;

@end
