@class MISEntitlementsModel, MISProfileModel;

@interface MISDBManager : SQLDB

@property (retain) MISProfileModel *Profiles;
@property (retain) MISEntitlementsModel *Entitlements;

- (BOOL)migrate;
- (void).cxx_destruct;
- (BOOL)addMonotonicTimeOffset:(long long)a0 cdHash:(id)a1 error:(id *)a2;
- (BOOL)addRTCResetCountOffset:(long long)a0 cdHash:(id)a1 error:(id *)a2;
- (id)allCMSBlobs;
- (id)allProfiles;
- (BOOL)authorizeEntryWithProfileUUID:(id)a0 cdHash:(id)a1 gracePeriod:(int)a2 currentMonotonicTime:(long long)a3 currentResetCount:(long long)a4 error:(id *)a5;
- (BOOL)banCDHash:(id)a0 error:(id *)a1;
- (BOOL)banProfileUUID:(id)a0 error:(id *)a1;
- (long long)countCDHashesRejectedByProfileNoThrowWithProfileUUID:(id)a0;
- (BOOL)createOnlineAuthEntry:(id)a0 error:(id *)a1;
- (BOOL)createTrustedTeamIDEntryWithProfileUUID:(id)a0 signature:(id)a1 error:(id *)a2;
- (BOOL)createTrustedTeamIDEntryWithTeamID:(id)a0 signature:(id)a1 error:(id *)a2;
- (void)deleteOnlineAuthEntryNoThrowWithCdHash:(id)a0;
- (void)deleteOnlineAuthEntryNoThrowWithProfileUUID:(id)a0 cdHash:(id)a1;
- (BOOL)deleteOnlineAuthEntryWithCdHash:(id)a0 error:(id *)a1;
- (BOOL)deleteOnlineAuthEntryWithProfileUUID:(id)a0 cdHash:(id)a1 error:(id *)a2;
- (BOOL)deleteTrustedWithProfileUUID:(id)a0 error:(id *)a1;
- (BOOL)deleteTrustedWithTeamID:(id)a0 error:(id *)a1;
- (id)findProfilesMatchingEntitlements:(id)a0 withCertificate:(id)a1;
- (id)findProfilesMatchingPredicates:(id)a0 withCertificate:(id)a1;
- (id)findProfilesWithCertificate:(id)a0;
- (id)getOnlineAuthEntriesNoThrow;
- (id)getOnlineAuthEntryNoThrowWithProfileUUID:(id)a0 cdHash:(id)a1;
- (id)getTeamIDForProfileUUID:(id)a0 error:(id *)a1;
- (int)insertProfile:(void *)a0;
- (BOOL)isProfileInstalled:(id)a0;
- (BOOL)queryCMSBlobForProfile:(id)a0 forcingXML:(BOOL)a1 handler:(id /* block */)a2;
- (void *)queryProfile:(id)a0;
- (void)recordIndeterminateEntryNoThrowWithProfileUUID:(id)a0 cdHash:(id)a1 onConflictDoNothing:(BOOL)a2;
- (BOOL)recordIndeterminateEntryWithProfileUUID:(id)a0 cdHash:(id)a1 onConflictDoNothing:(BOOL)a2 error:(id *)a3;
- (BOOL)rejectEntryWithProfileUUID:(id)a0 cdHash:(id)a1 isRejectedByWholeProfile:(BOOL)a2 error:(id *)a3;
- (BOOL)removeProfileWithUuid:(id)a0 error:(id *)a1;
- (void)setGracePeriodNoThrowWithProfileUUID:(id)a0 gracePeriod:(int)a1;
- (BOOL)setGracePeriodWithProfileUUID:(id)a0 gracePeriod:(int)a1 error:(id *)a2;
- (BOOL)setupSchema;

@end
