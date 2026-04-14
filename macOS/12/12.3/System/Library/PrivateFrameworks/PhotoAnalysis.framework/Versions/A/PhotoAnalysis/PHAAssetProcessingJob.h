@class NSArray, NSMutableDictionary, NSRecursiveLock;

@interface PHAAssetProcessingJob : PHAWorkerJob

@property (readonly) NSRecursiveLock *resultsLock;
@property (readonly, copy, nonatomic) NSArray *incompleteAssetLocalIdentifiers;
@property (readonly, nonatomic) NSMutableDictionary *resultsByAssetLocalIdentifier;
@property (readonly, nonatomic) NSArray *assetLocalIdentifiers;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)finished;
- (unsigned long long)resultCount;
- (float)completionScore;
- (id)statusAsDictionary;
- (void)reportResult:(unsigned long long)a0 forAssetLocalIdentifier:(id)a1;
- (id)initWithWorkerType:(short)a0 scenario:(unsigned long long)a1 assetLocalIdentifiers:(id)a2 library:(id)a3;
- (id)_resultsCopy;
- (unsigned long long)resultForAssetLocalIdentifier:(id)a0;
- (unsigned long long)successfulResultCount;

@end
