@class PHFetchOptions;

@interface PHQueryPersonContext : NSObject {
    PHFetchOptions *_fetchOptions;
}

+ (id)fetchOptionsWithOverriddenChangeDetectionCriteriaIfNecessary:(id)a0;
+ (id)subpredicatesForFetchOptions:(id)a0;

- (id)_notVerifiedPredicate;
- (id)_verifiedVisiblePredicate;
- (id)personContextUnverifiedPredicate;
- (id)subpredicates;
- (id)_verifiedPredicate;
- (id)personContextNonePredicates;
- (void).cxx_destruct;
- (id)personContextNoTombstonePredicate;
- (id)personContextOneUpPredicate;
- (id)_notHiddenTypePredicate;
- (id)_faceCountPredicateWithMinimum:(unsigned long long)a0;
- (id)initWithFetchOptions:(id)a0;
- (id)personContextPeopleHomePredicate;
- (id)personContextAdditionalPredicate;
- (id)personContextDetailPredicate;

@end
