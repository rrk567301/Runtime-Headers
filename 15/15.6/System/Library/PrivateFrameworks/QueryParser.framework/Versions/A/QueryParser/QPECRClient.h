@class NSString;

@interface QPECRClient : NSObject <QPECRClient>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedClient;

- (char)coolDownECRClientSyncWithError:(id *)a0;
- (id)generateEntityRequest:(id)a0 entityFilterType:(long long)a1 mode:(long long)a2 enableBackupSearch:(char)a3;
- (void)cooldownAsync;
- (void)cooldownSync;
- (id)resolveEntitiesWithRequest:(id)a0 error:(id *)a1;
- (id)visualIdentifiersWithQuery:(id)a0 entityFilterType:(long long)a1 enableBackupSearch:(char)a2 error:(id *)a3;
- (id)visualIdentifiersWithText:(id)a0 allowPrefixSearch:(char)a1 entityFilterType:(long long)a2 includeInferredNames:(char)a3 allowGroundingToNamesAndEmails:(char)a4 useNamesAndEmailsForNonRelations:(char)a5 enableBackupSearch:(char)a6 error:(id *)a7;
- (void)warmUpAsync;
- (char)warmUpECRClientSyncWithError:(id *)a0;
- (void)warmUpSync;

@end
