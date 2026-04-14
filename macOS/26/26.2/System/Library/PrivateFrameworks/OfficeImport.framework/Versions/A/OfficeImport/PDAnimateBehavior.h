@class PDAnimationTarget, NSMutableArray;

@interface PDAnimateBehavior : PDTimeNode {
    PDAnimationTarget *mTgtElement;
}

@property (retain, nonatomic) NSMutableArray *attributeNames;

- (void)setTarget:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)target;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
