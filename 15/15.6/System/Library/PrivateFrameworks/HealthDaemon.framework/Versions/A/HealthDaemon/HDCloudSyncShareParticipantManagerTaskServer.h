@class NSString;

@interface HDCloudSyncShareParticipantManagerTaskServer : HDStandardTaskServer <HKCloudSyncShareParticipantManagerServerInterface>

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
- (void)remote_fetchAllShareParticipantEmailAddressesForSharingType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)remote_fetchSharingParticipantStatus:(id /* block */)a0;
- (void)remote_revokeAccessForAllShareParticipantsForSharingType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)remote_tearDownHealthSharingForProfile:(id)a0 completion:(id /* block */)a1;

@end
