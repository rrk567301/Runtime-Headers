@class CHDData, CHDChart, OADGraphicProperties;

@interface CHDErrorBar : NSObject {
    CHDChart *mChart;
    double mValue;
    int mType;
    int mValueType;
    int mDirection;
    BOOL mNoEndCap;
    CHDData *mMinusValues;
    CHDData *mPlusValues;
    OADGraphicProperties *mGraphicProperties;
}

+ (id)errorBarWithChart:(id)a0;

- (void)setValueType:(int)a0;
- (int)valueType;
- (int)direction;
- (void)setValue:(double)a0;
- (double)value;
- (int)type;
- (void)setDirection:(int)a0;
- (void)setType:(int)a0;
- (id)description;
- (void).cxx_destruct;
- (void)setMinusValues:(id)a0;
- (id)graphicProperties;
- (id)initWithChart:(id)a0;
- (BOOL)isNoEndCap;
- (id)minusValues;
- (id)plusValues;
- (void)setGraphicProperties:(id)a0;
- (void)setNoEndCap:(BOOL)a0;
- (void)setPlusValues:(id)a0;

@end
