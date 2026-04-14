@class PHFetchOptions;

@interface PHQueryPersonContext : NSObject {
    PHFetchOptions *_fetchOptions;
}

+ (id)fetchOptionsWithOverriddenChangeDetectionCriteriaIfNecessary:(id)a0;
+ (id)subpredicatesForFetchOptions:(id)a0;

- (id)_verifiedVisiblePredicate;
- (id)personContextUnverifiedPredicate;
- (id)personContextNoTombstonePredicate;
- (id)_notHiddenTypePredicate;
- (id)_notVerifiedPredicate;
- (id)subpredicates;
- (id)personContextAdditionalPredicate;
- (id)personContextDetailPredicate;
- (void).cxx_destruct;
- (id)personContextNonePredicates;
- (id)initWithFetchOptions:(id)a0;
- (id)personContextPeopleHomePredicate;
- (id)personContextOneUpPredicate;
- (id)_faceCountPredicateWithMinimum:(unsigned long long)a0;
- (id)_verifiedPredicate;

@end
