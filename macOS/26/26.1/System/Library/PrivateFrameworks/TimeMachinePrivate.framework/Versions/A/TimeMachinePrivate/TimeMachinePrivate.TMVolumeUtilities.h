@interface TimeMachinePrivate.TMVolumeUtilities : NSObject

+ (id)mountNetworkShareWithUrl:(id)a0 sessionOptions:(id)a1 mountOptions:(id)a2 error:(id *)a3;
+ (BOOL)unmount:(id)a0 force:(BOOL)a1 error:(id *)a2;

- (id)init;

@end
