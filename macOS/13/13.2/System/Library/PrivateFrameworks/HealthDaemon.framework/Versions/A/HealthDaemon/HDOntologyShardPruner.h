@class HDOntologyUpdateCoordinator;

@interface HDOntologyShardPruner : NSObject <HDCacheDeleteProvider>

@property (readonly, weak, nonatomic) HDOntologyUpdateCoordinator *updateCoordinator;

- (id)init;
- (void).cxx_destruct;
- (long long)purgeableSpaceForUrgency:(int)a0;
- (long long)purgeSpaceForUrgency:(int)a0;
- (id)initWithOntologyUpdateCoordinator:(id)a0;
- (BOOL)pruneOntologyWithOptions:(unsigned long long)a0 error:(id *)a1;

@end
