@class NSString, HDOntologyUpdateCoordinator;

@interface HDOntologyShardPruner : NSObject <HDCacheDeleteProvider>

@property (readonly, weak, nonatomic) HDOntologyUpdateCoordinator *updateCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (char)pruneOntologyWithOptions:(unsigned long long)a0 error:(id *)a1;
- (id)initWithOntologyUpdateCoordinator:(id)a0;
- (long long)purgeSpaceForUrgency:(int)a0 volume:(id)a1;
- (long long)purgeableSpaceForUrgency:(int)a0 volume:(id)a1;

@end
