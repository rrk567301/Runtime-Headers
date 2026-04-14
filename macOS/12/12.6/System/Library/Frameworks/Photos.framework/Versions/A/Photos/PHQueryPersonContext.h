@class PHFetchOptions;

@interface PHQueryPersonContext : NSObject {
    PHFetchOptions *_fetchOptions;
}

+ (id)subpredicatesForFetchOptions:(id)a0;

- (void).cxx_destruct;
- (id)subpredicates;
- (id)initWithFetchOptions:(id)a0;
- (id)personContextNonePredicates;
- (id)personContextPeopleHomePredicate;
- (id)personContextAdditionalPredicate;
- (id)personContextDetailPredicate;
- (id)personContextOneUpPredicate;
- (id)_verifiedPredicate;
- (id)_faceCountPredicateWithMinimum:(unsigned long long)a0;
- (id)_notVerifiedPredicate;
- (id)_verifiedVisiblePredicate;
- (id)_notHiddenTypePredicate;

@end
