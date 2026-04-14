@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface GCConsoleUserMonitor : NSObject {
    BOOL _activated;
    struct __SCDynamicStore { } *_store;
    struct __CFString { } *_key;
    struct __CFArray { } *_keys;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSString *currentConsoleUser;
@property (nonatomic) unsigned int currentConsoleUserIdentifier;

+ (id)sharedInstance;

- (id)init;
- (void)deactivate;
- (void)activate;
- (void).cxx_destruct;
- (void)dynamicStoreDidChange:(struct __SCDynamicStore { } *)a0;

@end
