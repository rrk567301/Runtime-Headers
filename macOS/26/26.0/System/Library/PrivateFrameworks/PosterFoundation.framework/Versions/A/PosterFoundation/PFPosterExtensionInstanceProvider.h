@class NSUUID, NSSet, NSString, NSMapTable;

@interface PFPosterExtensionInstanceProvider : NSObject <PFPosterExtensionInstanceObserver, BSCancellable> {
    NSMapTable *_extensionBundleInstanceToReasonMap;
    NSMapTable *_extensionBundleIdentifierWithReasonToInstanceMap;
}

@property (readonly, nonatomic) NSUUID *defaultInstanceIdentifier;
@property (readonly, nonatomic) NSSet *activeExtensionInstances;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)relinquishExtensionInstance:(id)a0 reason:(id)a1;
- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)extensionInstanceDidInvalidate:(id)a0;
- (id)acquireInstanceForExtension:(id)a0 reason:(id)a1 error:(out id *)a2;
- (id)initWithDefaultInstanceIdentifier:(id)a0;
- (id)instanceForExtension:(id)a0 reason:(id)a1;
- (void)noteExtensionsWereUpdated:(id)a0;

@end
