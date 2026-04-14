@class NSString, OADTableBackground, OADTablePartStyle;

@interface OADTableStyle : NSObject {
    NSString *mName;
    NSString *mId;
    OADTableBackground *mBackground;
    OADTablePartStyle *mWholeTableStyle;
    OADTablePartStyle *mBand1HorzStyle;
    OADTablePartStyle *mBand2HorzStyle;
    OADTablePartStyle *mBand1VertStyle;
    OADTablePartStyle *mBand2VertStyle;
    OADTablePartStyle *mFirstRowStyle;
    OADTablePartStyle *mFirstColumnStyle;
    OADTablePartStyle *mLastRowStyle;
    OADTablePartStyle *mLastColumnStyle;
    OADTablePartStyle *mNorthEastStyle;
    OADTablePartStyle *mNorthWestStyle;
    OADTablePartStyle *mSouthEastStyle;
    OADTablePartStyle *mSouthWestStyle;
}

- (id)description;
- (id)name;
- (void).cxx_destruct;
- (void)setName:(id)a0;
- (id)background;
- (id)id;
- (void)setId:(id)a0;
- (void)setBackground:(id)a0;
- (void)setWholeTableStyle:(id)a0;
- (void)setBand1HorzStyle:(id)a0;
- (void)setBand2HorzStyle:(id)a0;
- (void)setBand1VertStyle:(id)a0;
- (void)setBand2VertStyle:(id)a0;
- (void)setFirstRowStyle:(id)a0;
- (void)setLastRowStyle:(id)a0;
- (void)setFirstColumnStyle:(id)a0;
- (void)setLastColumnStyle:(id)a0;
- (void)setNorthEastStyle:(id)a0;
- (void)setNorthWestStyle:(id)a0;
- (void)setSouthEastStyle:(id)a0;
- (void)setSouthWestStyle:(id)a0;
- (id)wholeTableStyle;
- (id)band1HorzStyle;
- (id)band2HorzStyle;
- (id)band1VertStyle;
- (id)band2VertStyle;
- (id)firstRowStyle;
- (id)lastRowStyle;
- (id)firstColumnStyle;
- (id)lastColumnStyle;
- (id)northWestStyle;
- (id)northEastStyle;
- (id)southWestStyle;
- (id)southEastStyle;
- (id)partStyle:(int)a0;
- (void)setStyle:(id)a0 forPart:(int)a1;

@end
