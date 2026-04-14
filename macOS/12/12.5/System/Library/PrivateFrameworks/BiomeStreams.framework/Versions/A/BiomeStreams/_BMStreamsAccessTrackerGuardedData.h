@class NSMutableSet, NSMutableDictionary;

@interface _BMStreamsAccessTrackerGuardedData : NSObject {
    NSMutableSet *_streamsCheckedForReadEntitlements;
    NSMutableSet *_streamsCheckedForWriteEntitlements;
    NSMutableDictionary *_cachedSandboxCheckResults;
}

- (id)init;
- (void).cxx_destruct;

@end
