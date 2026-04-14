@class PHFetchOptions;

@interface PHQueryPersonContext : NSObject {
    PHFetchOptions *_fetchOptions;
}

+ (id)fetchOptionsWithOverriddenChangeDetectionCriteriaIfNecessary:(id)a0;
+ (id)subpredicatesForFetchOptions:(id)a0;

- (id)personContextDetailPredicate;
- (id)personContextPeopleHomePredicate;
- (id)_notVerifiedPredicate;
- (id)personContextNoTombstonePredicate;
- (id)personContextNonePredicates;
- (id)personContextOneUpPredicate;
- (id)_verifiedVisiblePredicate;
- (id)initWithFetchOptions:(id)a0;
- (id)_faceCountPredicateWithMinimum:(unsigned long long)a0;
- (id)personContextAdditionalPredicate;
- (id)_verifiedPredicate;
- (void).cxx_destruct;
- (id)subpredicates;
- (id)personContextUnverifiedPredicate;
- (id)_notHiddenTypePredicate;

@end
