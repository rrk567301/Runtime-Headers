@interface GEOToolRequester : NSObject <GEOToolProxy>

+ (id)sharedRequester;

- (id)ping;
- (void)unlockDBs;
- (void)lockDBs;
- (id)getDefault:(id)a0 source:(long long *)a1;
- (unsigned long long)calculatePurgableSpaceForUrgency:(int)a0;
- (unsigned long long)freePurgableSpace:(unsigned long long)a0 forUrgency:(int)a1;
- (void)invalidateTileCache;
- (BOOL)notifyNetworkDefaultsChanged;

@end
