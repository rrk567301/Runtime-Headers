@class NSNumber, PDTransitionOptions;

@interface PDTransition : OADProperties {
    BOOL mHasType;
    int mType;
    BOOL mHasSpeed;
    int mSpeed;
    BOOL mHasAdvanceOnClick;
    BOOL mIsAdvanceOnClick;
    BOOL mHasAdvanceAfterTime;
    int mAdvanceAfterTime;
    PDTransitionOptions *mOptions;
}

@property (retain, nonatomic) NSNumber *duration;

- (void)setOptions:(id)a0;
- (BOOL)hasType;
- (id)options;
- (int)type;
- (id)init;
- (void)setType:(int)a0;
- (int)speed;
- (id)description;
- (void)setSpeed:(int)a0;
- (void).cxx_destruct;
- (BOOL)hasSpeed;
- (int)advanceAfterTime;
- (BOOL)hasAdvanceAfterTime;
- (BOOL)hasIsAdvanceOnClick;
- (BOOL)hasTransitionOptions;
- (BOOL)isAdvanceOnClick;
- (void)setAdvanceAfterTime:(int)a0;
- (void)setIsAdvanceOnClick:(BOOL)a0;

@end
