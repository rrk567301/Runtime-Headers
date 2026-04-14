@class NSString;

@interface QPECRClient : NSObject <QPECRClient>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedClient;

- (BOOL)coolDownECRClientSyncWithError:(id *)a0;
- (id)generateEntityRequest:(id)a0 entityFilterType:(long long)a1 mode:(long long)a2 enableBackupSearch:(BOOL)a3;
- (void)cooldownAsync;
- (void)cooldownSync;
- (id)resolveEntitiesWithRequest:(id)a0 error:(id *)a1;
- (id)visualIdentifiersWithQuery:(id)a0 entityFilterType:(long long)a1 enableBackupSearch:(BOOL)a2 error:(id *)a3;
- (id)visualIdentifiersWithText:(id)a0 allowPrefixSearch:(BOOL)a1 entityFilterType:(long long)a2 includeInferredNames:(BOOL)a3 allowGroundingToNamesAndEmails:(BOOL)a4 useNamesAndEmailsForNonRelations:(BOOL)a5 enableBackupSearch:(BOOL)a6 error:(id *)a7;
- (void)warmUpAsync;
- (BOOL)warmUpECRClientSyncWithError:(id *)a0;
- (void)warmUpSync;

@end
