@class NSString;

@interface HDEntitlementStoreServer : HDStandardTaskServer <HKEntitlementStoreServer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;
+ (id)requiredEntitlements;

- (id)remoteInterface;
- (id)exportedInterface;
- (void)remote_fetchContainerAppExtensionEntitlementsWithCompletion:(id /* block */)a0;

@end
