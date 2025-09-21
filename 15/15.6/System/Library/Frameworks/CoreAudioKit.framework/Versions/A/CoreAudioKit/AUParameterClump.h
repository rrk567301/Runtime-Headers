@class NSArray;

@interface AUParameterClump : NSBox {
    char mShouldBorder;
    NSArray *mParameterStrips;
    unsigned int mDisplayFlags;
}

- (void)dealloc;
- (void)cleanup;
- (unsigned int)displayFlags;
- (void)setDisplayFlags:(unsigned int)a0;
- (char)hasNonExpertParams;
- (id)initWithParameterStrips:(id)a0 title:(id)a1 displayFlags:(unsigned int)a2;
- (void)updateParametersForSetFlags;

@end
