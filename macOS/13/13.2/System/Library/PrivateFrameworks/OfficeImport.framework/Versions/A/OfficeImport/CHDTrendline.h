@class EDString, CHDTrendlineLabel, OADGraphicProperties;

@interface CHDTrendline : NSObject {
    BOOL mDisplayEquation;
    BOOL mDisplayRSquaredValue;
    double mBackward;
    double mForward;
    double mInterceptYAxis;
    int mPolynomialOrder;
    long long mMovingAveragePeriod;
    int mType;
    OADGraphicProperties *mGraphicProperties;
    CHDTrendlineLabel *mLabel;
    EDString *mName;
}

+ (id)trendline;

- (id)name;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (int)type;
- (void)setType:(int)a0;
- (void)setName:(id)a0;
- (id)label;
- (void)setLabel:(id)a0;
- (double)forward;
- (void)setForward:(double)a0;
- (double)backward;
- (id)graphicProperties;
- (BOOL)isDisplayEquation;
- (void)setDisplayEquation:(BOOL)a0;
- (BOOL)isDisplayRSquaredValue;
- (void)setDisplayRSquaredValue:(BOOL)a0;
- (void)setBackward:(double)a0;
- (double)interceptYAxis;
- (void)setInterceptYAxis:(double)a0;
- (int)polynomialOrder;
- (void)setPolynomialOrder:(int)a0;
- (long long)movingAveragePeriod;
- (void)setMovingAveragePeriod:(long long)a0;
- (id)defaultNameWithSeriesName:(id)a0;
- (void)setGraphicProperties:(id)a0;

@end
