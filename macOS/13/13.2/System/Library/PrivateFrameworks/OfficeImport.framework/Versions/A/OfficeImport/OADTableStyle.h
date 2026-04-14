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

- (id)name;
- (id)description;
- (void).cxx_destruct;
- (void)setName:(id)a0;
- (id)background;
- (id)id;
- (void)setBackground:(id)a0;
- (void)setId:(id)a0;
- (id)partStyle:(int)a0;
- (void)setStyle:(id)a0 forPart:(int)a1;
- (id)wholeTableStyle;
- (void)setWholeTableStyle:(id)a0;
- (id)band1HorzStyle;
- (void)setBand1HorzStyle:(id)a0;
- (id)band2HorzStyle;
- (void)setBand2HorzStyle:(id)a0;
- (id)band1VertStyle;
- (void)setBand1VertStyle:(id)a0;
- (id)band2VertStyle;
- (void)setBand2VertStyle:(id)a0;
- (id)firstRowStyle;
- (void)setFirstRowStyle:(id)a0;
- (id)firstColumnStyle;
- (void)setFirstColumnStyle:(id)a0;
- (id)lastRowStyle;
- (void)setLastRowStyle:(id)a0;
- (id)lastColumnStyle;
- (void)setLastColumnStyle:(id)a0;
- (id)northEastStyle;
- (void)setNorthEastStyle:(id)a0;
- (id)northWestStyle;
- (void)setNorthWestStyle:(id)a0;
- (id)southEastStyle;
- (void)setSouthEastStyle:(id)a0;
- (id)southWestStyle;
- (void)setSouthWestStyle:(id)a0;

@end
