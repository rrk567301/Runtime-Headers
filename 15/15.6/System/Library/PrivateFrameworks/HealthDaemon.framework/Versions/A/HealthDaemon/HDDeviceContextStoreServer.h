@class NSString;

@interface HDDeviceContextStoreServer : HDStandardTaskServer <HKDeviceContextStoreServerInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;
+ (id)requiredEntitlements;
+ (char)validateClient:(id)a0 error:(id *)a1;

- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)remote_fetchEntriesWithCompletion:(id /* block */)a0;
- (void)remote_numberOfDeviceContextsPerDeviceType:(id /* block */)a0;

@end
