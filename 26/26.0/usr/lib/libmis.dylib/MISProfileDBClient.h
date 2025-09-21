@interface MISProfileDBClient : NSObject {
    void /* unknown type, empty encoding */ db;
}

- (id)deviceUDID;
- (id)diagnostics;
- (id)init;
- (void).cxx_destruct;
- (id)trustedProfiles;
- (id)allProfileUUIDs;
- (BOOL)isCDHashBanned:(id)a0;
- (id)allSigningIdentities;
- (id)allTeamIDs;
- (id)auxiliarySignatureWithTeamID:(id)a0;
- (BOOL)existsIndeterminates;
- (BOOL)existsIndeterminatesSoon;
- (BOOL)existsIndeterminatesSoonWithProfileUUID:(id)a0 withCDHash:(id)a1;
- (BOOL)existsIndeterminatesWithProfileUUID:(id)a0 withCDHash:(id)a1;
- (BOOL)isProfileTrusted:(id)a0;
- (BOOL)isProfileUUIDBanned:(id)a0;
- (BOOL)isRejectedWithProfileUUID:(id)a0 withCDHash:(id)a1;
- (BOOL)isTeamIDTrusted:(id)a0;
- (id)onlineAuthEntries;
- (BOOL)profileIsForLocalProvisioning:(id)a0;
- (BOOL)profileProvisionsAllDevices:(id)a0;
- (id)profileUUIDsWithSigningIdentity:(id)a0;
- (id)profilesWithTeamID:(id)a0;
- (id)signingIdentitiesWithProfileUUID:(id)a0;
- (id)signingIdentitiesWithTeamID:(id)a0;
- (BOOL)teamIDSupportsAuxiliarySignature:(id)a0;
- (id)teamIDWithProfileUUID:(id)a0;
- (id)teamIDsWithSigningIdentity:(id)a0;
- (id)teamsForSettingsTrustUI;
- (id)trustedSigningIdentities;
- (id)trustedTeamIDs;

@end
