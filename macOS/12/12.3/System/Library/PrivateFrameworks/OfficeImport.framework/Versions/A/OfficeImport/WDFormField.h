@class NSString;

@interface WDFormField : WDRun {
    unsigned int mPosition;
    BOOL mLinkAbsolute;
    BOOL mLinkSpecifyingNamedLocation;
    NSString *mNamedLocation;
    NSString *mURI;
    NSString *mMacName;
    NSString *mDosName;
}

- (id)description;
- (void).cxx_destruct;
- (unsigned int)position;
- (id)URI;
- (void)setURI:(id)a0;
- (void)setPosition:(unsigned int)a0;
- (id)namedLocation;
- (void)setNamedLocation:(id)a0;
- (int)runType;
- (id)initWithParagraph:(id)a0;
- (BOOL)linkAbsolute;
- (void)setLinkAbsolute:(BOOL)a0;
- (BOOL)linkSpecifyingNamedLocation;
- (void)setLinkSpecifyingNamedLocation:(BOOL)a0;
- (id)macName;
- (void)setMacName:(id)a0;
- (id)dosName;
- (void)setDosName:(id)a0;

@end
