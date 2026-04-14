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
- (id)data;
- (void)setData:(id)a0;
- (void).cxx_destruct;
- (void)setLocked:(BOOL)a0;
- (BOOL)locked;
- (BOOL)hasSeparator;
- (void)setFieldType:(unsigned char)a0;
- (unsigned char)fieldType;
- (int)runType;
- (void)setFieldPosition:(int)a0;
- (void)setFieldMarkerType:(int)a0;
- (id)initWithParagraph:(id)a0;
- (int)fieldPosition;
- (int)fieldMarkerType;
- (BOOL)zombieEmbed;
- (void)setZombieEmbed:(BOOL)a0;
- (BOOL)resultDirty;
- (void)setResultDirty:(BOOL)a0;
- (BOOL)resultEdited;
- (void)setResultEdited:(BOOL)a0;
- (BOOL)privateResult;
- (void)setPrivateResult:(BOOL)a0;
- (BOOL)nested;
- (void)setNested:(BOOL)a0;
- (void)setHasSeparator:(BOOL)a0;

@end
