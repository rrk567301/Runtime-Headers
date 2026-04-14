@class NSMutableDictionary;

@interface _BMAccessTrackerGuardedData : NSObject {
    NSMutableDictionary *_loggedReads;
    NSMutableDictionary *_loggedWrites;
    NSMutableDictionary *_cachedSandboxCheckResults;
}

- (void).cxx_destruct;
- (id)init;

@end
