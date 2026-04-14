@class NSUUID, NSSet, NSString, NSMutableDictionary;
@protocol BSInvalidatable;

@interface PFPosterExtensionInstanceProvider : NSObject <PFPosterExtensionInstanceObserver, BSCancellable> {
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
    NSUUID *_defaultInstanceIdentifier;
    NSMutableDictionary *_lock_entryForKey;
    id<BSInvalidatable> _stateCaptureInvalidatable;
}

@property (readonly, nonatomic) NSUUID *defaultInstanceIdentifier;
@property (readonly, nonatomic) NSSet *activeExtensionInstances;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void).cxx_destruct;
- (void)relinquishExtensionInstance:(id)a0 reason:(id)a1;
- (id)init;
- (void)extensionInstanceDidInvalidate:(id)a0;
- (void)_lock_decrementEntry:(id)a0 forKey:(id)a1;
- (id)_lock_generateInstanceIdentifierForBundleIdentifier:(id)a0 reason:(id)a1;
- (void)_lock_invalidateEntry:(id)a0 forKey:(id)a1;
- (id)_stateCaptureDescription;
- (id)acquireInstanceForExtension:(id)a0 reason:(id)a1 error:(out id *)a2;
- (id)initWithDefaultInstanceIdentifier:(id)a0;
- (id)instanceForExtension:(id)a0 reason:(id)a1;
- (void)noteExtensionsWereUpdated:(id)a0;

@end
