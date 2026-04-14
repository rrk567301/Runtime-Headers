@class NSMutableArray;

@interface WFLSMResult : NSObject {
    NSMutableArray *categoryJudgements;
    float _threshold;
}

+ (id)extractScoresFromLSMResults:(struct __LSMResult { } *)a0;
+ (id)LSMResultWithLSMResultRef:(struct __LSMResult { } *)a0 threshold:(float)a1;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (BOOL)isRestricted;
- (long long)numberOfCategories;
- (id)initWithLSMResultRef:(struct __LSMResult { } *)a0 threshold:(float)a1;
- (long long)bestMatchingCategory;
- (float)scoreForCategory:(long long)a0;
- (void)setScore:(float)a0 forCategory:(long long)a1;

@end
