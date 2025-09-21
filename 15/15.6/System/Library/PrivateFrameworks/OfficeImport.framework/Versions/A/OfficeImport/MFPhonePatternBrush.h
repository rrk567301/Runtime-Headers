@class MFPhoneBitmap;

@interface MFPhonePatternBrush : MFPhoneBrush {
    MFPhoneBitmap *m_pattern;
    char m_usePaletteForBilevel;
}

+ (id)patternBrushWithBitmap:(id)a0 usePaletteForBilevel:(char)a1;

- (void).cxx_destruct;
- (void)fillPath:(id)a0 in_path:(id)a1;
- (id)initWithBitmap:(id)a0 usePaletteForBilevel:(char)a1;

@end
