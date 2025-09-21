@class HDProfile;

@interface HDDeviceContextStoreManager : NSObject

@property (weak, nonatomic) HDProfile *profile;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0;
- (id)numberOfDeviceContextsPerDeviceType:(id *)a0;
- (char)deleteDeviceContext:(id)a0 transaction:(id)a1 error:(id *)a2;
- (char)enumerateAllEntriesWithError:(id *)a0 handler:(id /* block */)a1;
- (id)fetchAllEntriesWithError:(id *)a0;
- (char)ingestRemoteDeviceContexts:(id)a0 transaction:(id)a1 error:(id *)a2;
- (char)insertOrUpdateDeviceContext:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)lookupOrCreateLocalDeviceContextWithError:(id *)a0;
- (char)updateSoftwareVersionForCurrentSyncIdentityWithError:(id *)a0;

@end
