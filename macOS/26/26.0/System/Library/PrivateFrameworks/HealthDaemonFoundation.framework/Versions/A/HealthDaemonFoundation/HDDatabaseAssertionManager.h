@class NSString, NSMutableSet, HDContentProtectionManager, NSObject;
@protocol OS_dispatch_source;

@interface HDDatabaseAssertionManager : HDAssertionManager {
    HDContentProtectionManager *_contentProtectionManager;
    NSString *_directoryPath;
    NSString *_prefix;
    NSMutableSet *_dBFilesForCoreOSAssertion;
    BOOL _coreOSAssertionTaken;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _timeout;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (void)invalidate;
- (BOOL)takeAssertion:(id)a0;
- (void)_handleAssertionReleased:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithDirectoryPath:(id)a0 prefix:(id)a1;

@end
