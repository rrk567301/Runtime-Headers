@class PHFetchOptions;

@interface PHQueryPersonContext : NSObject {
    PHFetchOptions *_fetchOptions;
}

+ (id)subpredicatesForFetchOptions:(id)a0;

- (void).cxx_destruct;
- (id)subpredicates;
- (id)initWithFetchOptions:(id)a0;
- (id)_verifiedPredicate;
- (id)_verifiedVisiblePredicate;
- (id)_notVerifiedPredicate;
- (id)_faceCountPredicateWithMinimum:(unsigned long long)a0;
- (id)_notHiddenTypePredicate;
- (id)personContextNonePredicates;
- (id)personContextPeopleHomePredicate;
- (id)personContextAdditionalPredicate;
- (id)personContextDetailPredicate;
- (id)personContextOneUpPredicate;

@end
