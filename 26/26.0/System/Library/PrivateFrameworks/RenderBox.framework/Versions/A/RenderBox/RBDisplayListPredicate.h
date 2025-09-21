@interface RBDisplayListPredicate : NSObject <NSCopying> {
    struct InvertiblePredicate { struct Predicate { struct vector<RB::DisplayList::Predicate::Term, 1UL, unsigned int> { unsigned char _p[24]; struct Term *_p; unsigned int _size; unsigned int _capacity; } _terms; } predicate; BOOL inverts_result; } _predicate;
}

@property (nonatomic) BOOL invertsResult;

+ (id)predicate;

- (void)removeAll;
- (void)addPredicate:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addCondition:(int)a0;
- (void)addConditionWithFillColor:(struct { float x0; float x1; float x2; float x3; })a0 colorSpace:(int)a1;
- (id).cxx_construct;
- (id)copyFilteredDisplayList:(id)a0;
- (id)filteringDisplayList:(id)a0;
- (void).cxx_destruct;

@end
