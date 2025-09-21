@class NSString;

@interface WDFormField : WDRun {
    unsigned int mPosition;
    char mLinkAbsolute;
    char mLinkSpecifyingNamedLocation;
    NSString *mNamedLocation;
    NSString *mURI;
    NSString *mMacName;
    NSString *mDosName;
}

- (id)description;
- (void).cxx_destruct;
- (void)setURI:(id)a0;
- (id)URI;
- (unsigned int)position;
- (void)setPosition:(unsigned int)a0;
- (id)namedLocation;
- (id)initWithParagraph:(id)a0;
- (void)setNamedLocation:(id)a0;
- (id)dosName;
- (int)runType;
- (id)macName;
- (void)setLinkSpecifyingNamedLocation:(char)a0;
- (char)linkAbsolute;
- (char)linkSpecifyingNamedLocation;
- (void)setDosName:(id)a0;
- (void)setLinkAbsolute:(char)a0;
- (void)setMacName:(id)a0;

@end
