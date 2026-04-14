@class OITSUColor;

@interface MFPhoneHatchBrush : MFPhoneBrush {
    OITSUColor *m_colour;
    int m_style;
}

+ (id)hatchBrushWithColour:(id)a0 in_style:(int)a1;
+ (id)patternNameForHatchStyle:(int)a0;

- (void).cxx_destruct;
- (id)initWithColour:(id)a0 in_style:(int)a1;
- (void)fillPath:(id)a0 in_path:(id)a1;

@end
