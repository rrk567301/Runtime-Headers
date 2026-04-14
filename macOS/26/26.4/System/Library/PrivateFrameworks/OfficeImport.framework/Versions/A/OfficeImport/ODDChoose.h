@class NSMutableArray, ODDOtherwise;

@interface ODDChoose : ODDLayoutObject {
    NSMutableArray *mWhens;
    ODDOtherwise *mOtherwise;
}

- (void).cxx_destruct;
- (id)init;
- (id)description;
- (void)addWhen:(id)a0;
- (id)otherwise;
- (void)setOtherwise:(id)a0;
- (id)whens;

@end
