@class PHFetchOptions;

@interface PHQueryPersonContext : NSObject {
    PHFetchOptions *_fetchOptions;
}

+ (id)subpredicatesForFetchOptions:(id)a0;

- (id)personContextAdditionalPredicate;
- (id)initWithFetchOptions:(id)a0;
- (id)_verifiedVisiblePredicate;
- (id)_notHiddenTypePredicate;
- (id)personContextNonePredicates;
- (id)personContextDetailPredicate;
- (id)_notVerifiedPredicate;
- (id)personContextNoTombstonePredicate;
- (id)subpredicates;
- (id)personContextUnverifiedPredicate;
- (id)_faceCountPredicateWithMinimum:(unsigned long long)a0;
- (id)_verifiedPredicate;
- (id)personContextOneUpPredicate;
- (void).cxx_destruct;
- (id)personContextPeopleHomePredicate;

@end
