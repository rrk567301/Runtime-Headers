@interface MFPStringFormat : NSObject {
    int mAlignment;
    unsigned short mDigitSubstitutionLanguage;
    int mDigitSubstitutionMethod;
    unsigned int mFormatFlags;
    int mHotkeyPrefix;
    int mLineAlignment;
    float mFirstTabOffset;
    int mTabStopCount;
    float *mTabStops;
    int mTrimming;
}

- (void)dealloc;
- (id)init;
- (void)setAlignment:(int)a0;
- (int)alignment;
- (const float *)tabStops;
- (unsigned int)formatFlags;
- (void)setFormatFlags:(unsigned int)a0;
- (unsigned short)digitSubstitutionLanguage;
- (void)setDigitSubstitutionLanguage:(unsigned short)a0;
- (int)digitSubstitutionMethod;
- (void)setDigitSubstitutionMethod:(int)a0;
- (int)hotkeyPrefix;
- (void)setHotkeyPrefix:(int)a0;
- (int)lineAlignment;
- (void)setLineAlignment:(int)a0;
- (float)firstTabOffset;
- (void)setFirstTabOffset:(float)a0;
- (int)tabStopCount;
- (void)setTabStops:(const float *)a0 count:(int)a1;
- (int)trimming;
- (void)setTrimming:(int)a0;

@end
