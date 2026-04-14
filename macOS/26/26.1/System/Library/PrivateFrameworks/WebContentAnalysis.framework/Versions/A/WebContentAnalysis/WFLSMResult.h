@class NSMutableArray;

@interface WFLSMResult : NSObject {
    NSMutableArray *categoryJudgements;
    float _threshold;
}

+ (id)LSMResultWithLSMResultRef:(struct __LSMResult { } *)a0 threshold:(float)a1;
+ (id)extractScoresFromLSMResults:(struct __LSMResult { } *)a0;

- (long long)numberOfCategories;
- (id)description;
- (BOOL)isRestricted;
- (void)dealloc;
- (id)debugDescription;
- (id)initWithLSMResultRef:(struct __LSMResult { } *)a0 threshold:(float)a1;
- (long long)bestMatchingCategory;
- (float)scoreForCategory:(long long)a0;
- (void)setScore:(float)a0 forCategory:(long long)a1;

@end
