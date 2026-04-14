@class NSMutableDictionary;

@interface AVBIOKClockSyncManager : NSObject {
    NSMutableDictionary *_clockSyncs;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clockSyncsLock;
}

+ (id)sharedClockSyncManager;
+ (long long)clockTypeForClockIdentifier:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)init;
- (id)clockSyncForClockIdentifier:(unsigned long long)a0 pid:(int)a1;
- (void)releaseClockSyncForClockIdentifier:(unsigned long long)a0;

@end
