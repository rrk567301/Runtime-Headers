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

- (void)setSpeed:(int)a0;
- (int)speed;
- (void)setOptions:(id)a0;
- (BOOL)hasType;
- (void)setType:(int)a0;
- (void).cxx_destruct;
- (id)options;
- (int)type;
- (id)init;
- (id)description;
- (BOOL)hasSpeed;
- (int)advanceAfterTime;
- (BOOL)hasAdvanceAfterTime;
- (BOOL)hasIsAdvanceOnClick;
- (BOOL)hasTransitionOptions;
- (BOOL)isAdvanceOnClick;
- (void)setAdvanceAfterTime:(int)a0;
- (void)setIsAdvanceOnClick:(BOOL)a0;

@end
