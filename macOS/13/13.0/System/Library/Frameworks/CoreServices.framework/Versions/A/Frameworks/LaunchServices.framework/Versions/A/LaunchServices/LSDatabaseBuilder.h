@class NSObject;
@protocol OS_dispatch_queue;

@interface LSDatabaseBuilder : NSObject {
    NSObject<OS_dispatch_queue> *_ioQueue;
}

+ (id)searchPathsForDomain:(unsigned int)a0;
+ (void)addPathsForDomain:(unsigned int)a0 toOrderedSet:(id)a1;

- (void).cxx_destruct;
- (id)initWithIOQueue:(id)a0;
- (void)createAndSeedLocalDatabase:(BOOL *)a0;
- (void)syncWithMI:(void *)a0;
- (void)initialMISyncComplete;
- (void)setSeedingComplete:(BOOL)a0;
- (void)registerLibraries;
- (void)findAndRegisterApplicationBundles:(void *)a0;
- (void)scanAndRegisterNetworkVolumes:(void *)a0;
- (void)scanAndRegisterSpotlightContents:(void *)a0;

@end
