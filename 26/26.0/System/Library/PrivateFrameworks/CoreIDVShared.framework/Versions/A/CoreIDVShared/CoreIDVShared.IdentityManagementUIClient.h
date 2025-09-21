@class _TtC13CoreIDVShared20IdentityImageQuality, _TtC13CoreIDVShared25IdentityProofingDocuments, _TtC13CoreIDVShared22IdentityLivenessConfig, NSString, _TtC13CoreIDVShared24IdentityProofingUIConfig, _TtC13CoreIDVShared18NFCPendingCommands, _TtC13CoreIDVShared22IdentityProofingStatus, _TtC13CoreIDVShared22IdentityBindingDetails, _TtC13CoreIDVShared32IdentityProofingLivenessVideoURL, _TtC13CoreIDVShared27IdentityProofingDisplayInfo, _TtC13CoreIDVShared29IdentityProofingConfiguration, NSArray, NSError, NSData;

@interface CoreIDVShared.IdentityManagementUIClient : NSObject <CoreIDVShared.IdentityManagementUIProtocol, CoreIDVShared.IdentityProofingConnectionInvalidating, CoreIDVShared.IdenityProofingAvailabilityProviding> {
    void /* unknown type, empty encoding */ connection;
}

- (void)dealloc;
- (void)invalidate;
- (id)init;
- (void).cxx_destruct;
- (void)fetchLivenessConsentOptinUIWithConfiguration:(_TtC13CoreIDVShared29IdentityProofingConfiguration *)a0 completionHandler:(void (^)(_TtC13CoreIDVShared24IdentityProofingUIConfig *, NSError *))a1;
- (void)clearDataAfterTerminalProofingStateWithConfiguration:(_TtC13CoreIDVShared29IdentityProofingConfiguration *)a0 proofingOptions:(unsigned long long)a1 completionHandler:(void (^)(NSError *))a2;
- (void)deleteBoundACLWithCompletionHandler:(void (^)(NSError *))a0;
- (void)fetchAnalyticsSessionIDWithConfiguration:(_TtC13CoreIDVShared29IdentityProofingConfiguration *)a0 proofingOptions:(unsigned long long)a1 completionHandler:(void (^)(NSString *))a2;
- (void)fetchBioBindingDetailsWithCompletionHandler:(void (^)(_TtC13CoreIDVShared22IdentityBindingDetails *, NSError *))a0;
- (void)fetchBiomeFedStatsUIWithConfiguration:(_TtC13CoreIDVShared29IdentityProofingConfiguration *)a0 completionHandler:(void (^)(_TtC13CoreIDVShared24IdentityProofingUIConfig *, NSError *))a1;
- (void)fetchExtendedReviewDisplayInfoWithConfiguration:(_TtC13CoreIDVShared29IdentityProofingConfiguration *)a0 proofingOptions:(unsigned long long)a1 completionHandler:(void (^)(_TtC13CoreIDVShared27IdentityProofingDisplayInfo *, NSError *))a2;
- (void)fetchImageQualitySettingsWithConfiguration:(_TtC13CoreIDVShared29IdentityProofingConfiguration *)a0 completionHandler:(void (^)(_TtC13CoreIDVShared20IdentityImageQuality *, NSError *))a1;
- (void)fetchTermsAndConditionsWithCompletionHandler:(void (^)(NSString *, NSError *))a0;
- (void)getLivenessConfigWithCompletionHandler:(void (^)(_TtC13CoreIDVShared22IdentityLivenessConfig *, NSError *))a0;
- (void)getPendingCommandsWithResponseAPDUs:(_TtC13CoreIDVShared18NFCPendingCommands *)a0 completionHandler:(void (^)(_TtC13CoreIDVShared18NFCPendingCommands *, NSError *))a1;
- (void)globalAuthACLTemplateUUIDsWithCompletionHandler:(void (^)(NSArray *, long long, NSError *))a0;
- (void)initiatePartialProofingWithConfiguration:(_TtC13CoreIDVShared29IdentityProofingConfiguration *)a0 documents:(_TtC13CoreIDVShared25IdentityProofingDocuments *)a1 proofingSessionID:(NSString *)a2 completionHandler:(void (^)(NSError *))a3;
- (void)isWatchPairedWithConfiguration:(_TtC13CoreIDVShared29IdentityProofingConfiguration *)a0 completionHandler:(void (^)(BOOL))a1;
- (void)prepareForProofingDisplayWithConfiguration:(_TtC13CoreIDVShared29IdentityProofingConfiguration *)a0 proofingOptions:(unsigned long long)a1 completionHandler:(void (^)(_TtC13CoreIDVShared27IdentityProofingDisplayInfo *, NSError *))a2;
- (void)prepareForProofingIdentityWithConfiguration:(_TtC13CoreIDVShared29IdentityProofingConfiguration *)a0 documents:(_TtC13CoreIDVShared25IdentityProofingDocuments *)a1 proofingSessionID:(NSString *)a2 completionHandler:(void (^)(NSError *))a3;
- (void)proofIdentityWithConfiguration:(_TtC13CoreIDVShared29IdentityProofingConfiguration *)a0 authCode:(NSString *)a1 proofingOptions:(unsigned long long)a2 completionHandler:(void (^)(_TtC13CoreIDVShared27IdentityProofingDisplayInfo *, NSError *))a3;
- (void)proofIdentityWithConfiguration:(_TtC13CoreIDVShared29IdentityProofingConfiguration *)a0 documents:(_TtC13CoreIDVShared25IdentityProofingDocuments *)a1 proofingOptions:(unsigned long long)a2 shouldScheduleUploads:(BOOL)a3 totalUploadAssetsFileSizeInBytes:(long long)a4 completionHandler:(void (^)(_TtC13CoreIDVShared27IdentityProofingDisplayInfo *, NSError *))a5;
- (void)proofingCancelledWithConfiguration:(_TtC13CoreIDVShared29IdentityProofingConfiguration *)a0 proofingOptions:(unsigned long long)a1 completionHandler:(void (^)(NSError *))a2;
- (void)proofingFlowAvailabilityWithCompletionHandler:(void (^)(_TtC13CoreIDVShared22IdentityProofingStatus *, NSError *))a0;
- (void)proofingStatusFor:(NSString *)a0 country:(NSString *)a1 completionHandler:(void (^)(_TtC13CoreIDVShared29IdentityProofingConfiguration *, NSError *))a2;
- (void)provisionIdentityWithConfiguration:(_TtC13CoreIDVShared29IdentityProofingConfiguration *)a0 sessionLookupIdentifier:(NSString *)a1 proofingOptions:(unsigned long long)a2 completionHandler:(void (^)(NSError *))a3;
- (void)retrieveBioBindingUnboundACLWithCompletionHandler:(void (^)(NSData *))a0;
- (void)retrieveBoundACLWithCompletionHandler:(void (^)(NSData *))a0;
- (void)retrievePasscodeBindingUnboundACLWithCompletionHandler:(void (^)(NSData *))a0;
- (void)saveIdentityProofingDataSharingUserConsentWithDocumentType:(long long)a0 axSettings:(NSArray *)a1 consent:(BOOL)a2 consentType:(long long)a3 proofingOptions:(unsigned long long)a4 completionHandler:(void (^)(NSError *))a5;
- (void)setGlobalBoundACLWithData:(NSData *)a0 type:(long long)a1 completionHandler:(void (^)(NSError *))a2;
- (void)setModifiedGlobalBoundACLWithData:(NSData *)a0 externalizedLAContext:(NSData *)a1 completionHandler:(void (^)(NSArray *, NSError *))a2;
- (void)shouldPerformDeviceCrossCheckWithCompletionHandler:(void (^)(BOOL, NSError *))a0;
- (void)triggerAssetsUploadWithProofingOptions:(unsigned long long)a0 canUploadOnExpensiveNetwork:(BOOL)a1 completionHandler:(void (^)(NSError *))a2;
- (void)uploadLivenessVideoWithLivenessVideoURL:(_TtC13CoreIDVShared32IdentityProofingLivenessVideoURL *)a0 shouldScheduleUploads:(BOOL)a1 completionHandler:(void (^)(NSError *))a2;
- (void)watchIdentityPassesCountWithCompletionHandler:(void (^)(long long, NSError *))a0;

@end
