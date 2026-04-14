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

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (int)type;
- (void)setType:(int)a0;
- (id)options;
- (void)setOptions:(id)a0;
- (BOOL)hasType;
- (void)setSpeed:(int)a0;
- (int)speed;
- (BOOL)hasSpeed;
- (BOOL)hasIsAdvanceOnClick;
- (BOOL)hasAdvanceAfterTime;
- (BOOL)hasTransitionOptions;
- (BOOL)isAdvanceOnClick;
- (void)setIsAdvanceOnClick:(BOOL)a0;
- (int)advanceAfterTime;
- (void)setAdvanceAfterTime:(int)a0;

@end
