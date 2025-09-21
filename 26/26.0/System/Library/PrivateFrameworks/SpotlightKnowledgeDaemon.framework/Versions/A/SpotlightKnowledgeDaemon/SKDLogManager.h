@class NSMutableDictionary;

@interface SKDLogManager : NSObject {
    NSMutableDictionary *_logs;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)defaultLog;
- (id)logForDomain:(id)a0;

@end
