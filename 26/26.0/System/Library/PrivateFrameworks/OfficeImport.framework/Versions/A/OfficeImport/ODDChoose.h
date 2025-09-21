@class NSMutableArray, ODDOtherwise;

@interface ODDChoose : ODDLayoutObject {
    NSMutableArray *mWhens;
    ODDOtherwise *mOtherwise;
}

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)addWhen:(id)a0;
- (id)otherwise;
- (void)setOtherwise:(id)a0;
- (id)whens;

@end
