@class NSString;

@interface HDAuthorizationStoreWriteServer : HDStandardTaskServer <HKAuthorizationStoreWriteServer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;
+ (id)requiredEntitlements;
+ (char)validateClient:(id)a0 error:(id *)a1;

- (id)exportedInterface;
- (id)remoteInterface;
- (void)remote_setAuthorizationStatuses:(id)a0 authorizationModes:(id)a1 forBundleIdentifier:(id)a2 options:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)remote_setObjectAuthorizationStatuses:(id)a0 objectType:(id)a1 bundleIdentifier:(id)a2 sessionIdentifier:(id)a3 completion:(id /* block */)a4;
- (void)remote_setRequestedAuthorizationForBundleIdentifier:(id)a0 shareTypes:(id)a1 readTypes:(id)a2 completion:(id /* block */)a3;

@end
