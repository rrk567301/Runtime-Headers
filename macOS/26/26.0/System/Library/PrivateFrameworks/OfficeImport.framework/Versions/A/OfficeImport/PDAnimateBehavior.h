@class PDAnimationTarget, NSMutableArray;

@interface PDAnimateBehavior : PDTimeNode {
    PDAnimationTarget *mTgtElement;
}

@property (retain, nonatomic) NSMutableArray *attributeNames;

- (id)init;
- (id)target;
- (id)description;
- (void)setTarget:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
