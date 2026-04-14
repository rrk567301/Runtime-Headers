@class PHFetchOptions;

@interface PHQueryPersonContext : NSObject {
    PHFetchOptions *_fetchOptions;
}

+ (id)subpredicatesForFetchOptions:(id)a0;
+ (id)fetchOptionsWithOverriddenChangeDetectionCriteriaIfNecessary:(id)a0;

- (id)personContextNoTombstonePredicate;
- (id)_faceCountPredicateWithMinimum:(unsigned long long)a0;
- (id)subpredicates;
- (id)_notHiddenTypePredicate;
- (id)_notVerifiedPredicate;
- (id)personContextPeopleHomePredicate;
- (id)initWithFetchOptions:(id)a0;
- (id)_verifiedPredicate;
- (id)personContextDetailPredicate;
- (void).cxx_destruct;
- (id)personContextNonePredicates;
- (id)personContextOneUpPredicate;
- (id)personContextAdditionalPredicate;
- (id)_verifiedVisiblePredicate;
- (id)personContextUnverifiedPredicate;

@end
