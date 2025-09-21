@class NSData;

@interface WDFieldMarker : WDRunWithCharacterProperties {
    int mFieldPosition;
    int mMarkerType;
    unsigned char mFieldType;
    NSData *mData;
    unsigned char mZombieEmbed : 1;
    unsigned char mResultDirty : 1;
    unsigned char mResultEdited : 1;
    unsigned char mLocked : 1;
    unsigned char mPrivateResult : 1;
    unsigned char mNested : 1;
    unsigned char mHasSeparator : 1;
}

- (id)description;
- (void).cxx_destruct;
- (id)data;
- (void)setData:(id)a0;
- (unsigned char)fieldType;
- (void)setLocked:(char)a0;
- (id)initWithParagraph:(id)a0;
- (char)hasSeparator;
- (char)locked;
- (void)setFieldType:(unsigned char)a0;
- (int)runType;
- (void)setResultDirty:(char)a0;
- (void)setZombieEmbed:(char)a0;
- (int)fieldMarkerType;
- (int)fieldPosition;
- (char)nested;
- (char)privateResult;
- (char)resultDirty;
- (char)resultEdited;
- (void)setFieldMarkerType:(int)a0;
- (void)setFieldPosition:(int)a0;
- (void)setHasSeparator:(char)a0;
- (void)setNested:(char)a0;
- (void)setPrivateResult:(char)a0;
- (void)setResultEdited:(char)a0;
- (char)zombieEmbed;

@end
