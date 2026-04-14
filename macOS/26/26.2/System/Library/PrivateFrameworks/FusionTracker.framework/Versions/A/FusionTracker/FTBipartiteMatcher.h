@interface FTBipartiteMatcher : NSObject {
    struct unique_ptr<ft::HungarianMatcher, std::default_delete<ft::HungarianMatcher>> { struct { struct HungarianMatcher *__ptr_; } ; } _optimizer;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)init;
- (id)computeMatchingForCostMatrix:(const float *)a0 withRowCount:(unsigned long long)a1 columnCount:(unsigned long long)a2;
- (id)initWithInitialSize:(unsigned long long)a0;
- (id)computeMatchingForCostMatrix:(const float *)a0 withRowCount:(unsigned long long)a1 columnCount:(unsigned long long)a2 maxIters:(unsigned long long)a3 minimumNonzeroPaddingValue:(float)a4;

@end
