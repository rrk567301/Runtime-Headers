@class NSString, EDResources, NSMutableArray;

@interface EDConditionalFormattingRule : NSObject {
    EDResources *mResources;
    int mType;
    int mOperator;
    NSMutableArray *mFormulas;
    unsigned long long mDifferentialStyleIndex;
    BOOL mStopIfTrue;
    BOOL mAppliesToDateOnly;
    long long mPriority;
    BOOL mAboveAverage;
    BOOL mBottom;
    BOOL mEqualAverage;
    BOOL mPercent;
    unsigned long long mRank;
    long long mStdDev;
    NSString *mText;
    int mTimePeriod;
}

+ (id)conditionalFormattingRuleWithResources:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (int)type;
- (void)setType:(int)a0;
- (long long)priority;
- (id)text;
- (BOOL)bottom;
- (void)setPriority:(long long)a0;
- (unsigned long long)rank;
- (void)setRank:(unsigned long long)a0;
- (void)setText:(id)a0;
- (id)initWithResources:(id)a0;
- (void)setBottom:(BOOL)a0;
- (unsigned long long)formulaCount;
- (id)formulaAtIndex:(unsigned long long)a0;
- (BOOL)percent;
- (long long)compareToOtherRuleUsingPriority:(id)a0;
- (int)operatorEnum;
- (void)setOperatorEnum:(int)a0;
- (void)addFormula:(id)a0 worksheet:(id)a1;
- (BOOL)stopIfTrue;
- (void)setStopIfTrue:(BOOL)a0;
- (BOOL)aboveAverage;
- (void)setAboveAverage:(BOOL)a0;
- (BOOL)equalAverage;
- (void)setEqualAverage:(BOOL)a0;
- (void)setPercent:(BOOL)a0;
- (long long)stdDev;
- (void)setStdDev:(long long)a0;
- (int)timePeriod;
- (void)setTimePeriod:(int)a0;
- (BOOL)appliesToDateOnly;
- (void)setAppliesToDateOnly:(BOOL)a0;
- (unsigned long long)differentialStyleIndex;
- (void)setDifferentialStyleIndex:(unsigned long long)a0;
- (id)differentialStyle;
- (void)setDifferentialStyle:(id)a0;

@end
