@class NSNumber, PDTransitionOptions;

@interface PDTransition : OADProperties {
    char mHasType;
    int mType;
    char mHasSpeed;
    int mSpeed;
    char mHasAdvanceOnClick;
    char mIsAdvanceOnClick;
    char mHasAdvanceAfterTime;
    int mAdvanceAfterTime;
    PDTransitionOptions *mOptions;
}

@property (retain, nonatomic) NSNumber *duration;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)setType:(int)a0;
- (int)type;
- (id)options;
- (void)setOptions:(id)a0;
- (char)hasType;
- (void)setSpeed:(int)a0;
- (int)speed;
- (char)hasSpeed;
- (int)advanceAfterTime;
- (char)hasAdvanceAfterTime;
- (char)hasIsAdvanceOnClick;
- (char)hasTransitionOptions;
- (char)isAdvanceOnClick;
- (void)setAdvanceAfterTime:(int)a0;
- (void)setIsAdvanceOnClick:(char)a0;

@end
