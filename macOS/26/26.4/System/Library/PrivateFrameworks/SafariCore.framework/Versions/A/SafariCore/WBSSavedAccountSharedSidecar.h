@class NSURLProtectionSpace, NSString, NSDictionary, WBSPair, NSArray, WBSFileVaultRecoveryKeyDeviceInfo, WBSTOTPGenerator;

@interface WBSSavedAccountSharedSidecar : NSObject <WBSSavedAccountSidecarInternal, NSCopying, WBSSavedAccountSidecar>

@property (retain, nonatomic) NSDictionary *originalKeychainDictionary;
@property (retain, nonatomic) NSDictionary *originalPasskeyAdditionsDictionary;
@property (copy, nonatomic) NSString *user;
@property (retain, nonatomic) WBSTOTPGenerator *totpGenerator;
@property (copy, nonatomic) NSString *notesEntry;
@property (copy, nonatomic) NSString *customTitle;
@property (copy, nonatomic) NSString *originalContributorParticipantID;
@property (copy, nonatomic) NSString *participantIDForUserThatMovedSavedAccountToRecentlyDeleted;
@property (readonly, nonatomic) WBSPair *prefixedSharableDataForSidecarAndPasskeyAdditionsDictionaries;
@property (copy, nonatomic) NSArray *additionalSites;
@property (copy, nonatomic) NSArray *historyItems;
@property (retain, nonatomic) WBSFileVaultRecoveryKeyDeviceInfo *fileVaultRecoveryKeyDeviceInfo;
@property (readonly, nonatomic) BOOL hasDataPreventingNonInteractiveMerge;
@property (readonly, copy, nonatomic) NSURLProtectionSpace *protectionSpace;
@property (readonly, copy, nonatomic) WBSPair *sidecarAndPasskeyAdditionsDictionaryRepresentations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_prefixedSharableDataForDictionary:(id)a0;
- (id)_sidecarDictionaryRepresentation;
- (id)initWithPersonalSidecar:(id)a0;
- (id)initWithUser:(id)a0 protectionSpace:(id)a1 dictionaryRepresentation:(id)a2 passkeyAdditionsDictionaryRepresentation:(id)a3;

@end
