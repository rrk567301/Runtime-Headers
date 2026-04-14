@class PDAnimationTarget, NSMutableArray;

@interface PDAnimateBehavior : PDTimeNode {
    PDAnimationTarget *mTgtElement;
}

@property (retain, nonatomic) NSMutableArray *attributeNames;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)setTarget:(id)a0;
- (id)target;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
