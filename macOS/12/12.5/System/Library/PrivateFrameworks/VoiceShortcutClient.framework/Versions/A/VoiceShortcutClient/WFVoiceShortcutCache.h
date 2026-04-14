@class NSArray, NSMutableArray;

@interface WFVoiceShortcutCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy, nonatomic) NSArray *voiceShortcuts;
@property (readonly, copy, nonatomic) NSMutableArray *waitingFetchRequests;
@property (readonly, nonatomic) unsigned long long state;

+ (BOOL)shouldCacheForCurrentProcess;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)clear;
- (void)unregisterFromDatabaseNotifications;
- (void)registerForDatabaseNotifications;
- (void)databaseDidChange;
- (void)getCachedVoiceShortcuts:(id /* block */)a0;
- (void)setCachedVoiceShortcuts:(id /* block */)a0;

@end
