@class NSMutableArray;

@interface WFLSMResult : NSObject {
    NSMutableArray *categoryJudgements;
    float _threshold;
}

+ (id)LSMResultWithLSMResultRef:(struct __LSMResult { } *)a0 threshold:(float)a1;
+ (id)extractScoresFromLSMResults:(struct __LSMResult { } *)a0;

- (id)debugDescription;
- (BOOL)isRestricted;
- (id)description;
- (long long)numberOfCategories;
- (void)dealloc;
- (id)initWithLSMResultRef:(struct __LSMResult { } *)a0 threshold:(float)a1;
- (long long)bestMatchingCategory;
- (float)scoreForCategory:(long long)a0;
- (void)setScore:(float)a0 forCategory:(long long)a1;

@end
