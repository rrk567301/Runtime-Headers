@class NSString, PLAssetsdConnectionAuthorization;

@interface PLAssetsdCloudInternalService : PLAbstractLibraryServicesManagerService <PLAssetsdCloudInternalServiceProtocol> {
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getSystemBudgetsWithReply:(id /* block */)a0;
- (void)rampingRequestForResourceType:(unsigned long long)a0 numRequested:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)getCurrentTransferProgress:(id /* block */)a0;
- (void)unsharePendingAssetsSharedToScopeWithIdentifier:(id)a0;
- (void)getResetSyncStatusWithReply:(id /* block */)a0;
- (void)createPhotostreamAlbumWithStreamID:(id)a0;
- (void)updateSharedAlbumsCachedServerConfigurationLimits;
- (void)declineCollectionShareWithUUID:(id)a0 reply:(id /* block */)a1;
- (id)markOnboardingPreviewAssetsByProcessingRulesOnLibraryScopeWithUUID:(id)a0 excludePersonUUIDs:(id)a1 reply:(id /* block */)a2;
- (void)removeParticipantsWithParticipantUUIDs:(id)a0 fromLibraryScopeWithIdentifier:(id)a1 retentionPolicy:(long long)a2 exitSource:(long long)a3 reply:(id /* block */)a4;
- (void)getNotUploadedCount:(id /* block */)a0;
- (void)keyForEmailAddress:(id)a0 reply:(id /* block */)a1;
- (void)deactivateLibraryScopeWithUUID:(id)a0 reply:(id /* block */)a1;
- (void)resetLocalOnlyLibraryScopesAndAllLibraryScopeAssetStatesWithReply:(id /* block */)a0;
- (void)personInfoDictionaryForPersonID:(id)a0 reply:(id /* block */)a1;
- (void)cloudSharingSpaceManagementRequestWithType:(unsigned long long)a0 optionalBytesToPurge:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)setCloudPhotoLibraryPauseState:(BOOL)a0 reason:(short)a1;
- (void)enablePhotostreamsWithStreamID:(id)a0;
- (void)isReadyForAnalysisQuickCheckWithReply:(id /* block */)a0;
- (id)initWithLibraryServicesManager:(id)a0 connectionAuthorization:(id)a1;
- (void)shouldAutoEnableiCPLOnOSXWithReply:(id /* block */)a0;
- (void)setPersonInfoDictionary:(id)a0 forPersonID:(id)a1;
- (void)setCloudPhotoLibraryEnabledState:(BOOL)a0;
- (void)acceptShareWithUUID:(id)a0 reply:(id /* block */)a1;
- (void)confirmAllRemainingOnboardingPreviewAssetsOnLibraryScopeWithUUID:(id)a0 reply:(id /* block */)a1;
- (void)markResourcesPurgeableWithUrgency:(long long)a0 assetUuids:(id)a1 reply:(id /* block */)a2;
- (void)overrideSystemBudgetsForSyncSession:(BOOL)a0 pauseReason:(id)a1 systemBudgets:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)reportInvitationAsSpamForCollectionShareWithUUID:(id)a0 reply:(id /* block */)a1;
- (void)refreshLibraryScopeWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)sharedLibraryRampCheckWithReply:(id /* block */)a0;
- (void)getCPLSettingsWithReply:(id /* block */)a0;
- (void)forceParticipantAssetTrashNotificationWithReply:(id /* block */)a0;
- (void)isReadyForCloudPhotoLibraryWithReply:(id /* block */)a0;
- (void)requestDeviceLibraryConfigurationChange:(long long)a0 reply:(id /* block */)a1;
- (void)userViewedSharedLibraryParticipantAssetTrashNotificationWithReply:(id /* block */)a0;
- (void)emailAddressForKey:(long long)a0 reply:(id /* block */)a1;
- (id)activateLibraryScopeWithUUID:(id)a0 reply:(id /* block */)a1;
- (void)setPrefetchMode:(long long)a0 reply:(id /* block */)a1;
- (void)getCPLConfigurationValueForKey:(id)a0 reply:(id /* block */)a1;
- (void)sendInvitationsForCollectionShareWithUUID:(id)a0 participantUUIDs:(id)a1 reply:(id /* block */)a2;
- (void).cxx_destruct;
- (void)syncCloudPhotoLibrary;
- (void)startExitFromLibraryScopeWithIdentifier:(id)a0 retentionPolicy:(long long)a1 exitSource:(long long)a2 reply:(id /* block */)a3;
- (void)publishShareWithUUID:(id)a0 reply:(id /* block */)a1;
- (void)getLibraryScopeStatusCountsForScopeWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)isReadyForAnalysisCPLInitialDownloadCompletedWithReply:(id /* block */)a0;
- (void)isReadyForAnalysisWithReply:(id /* block */)a0;
- (void)queryUserIdentitiesWithEmails:(id)a0 phoneNumbers:(id)a1 reply:(id /* block */)a2;
- (void)fetchShareWithURL:(id)a0 ignoreExistingShare:(BOOL)a1 reply:(id /* block */)a2;
- (void)isComputeSyncEnabledForDirection:(long long)a0 reply:(id /* block */)a1;
- (void)forceSyncMomentShareWithUUID:(id)a0 reply:(id /* block */)a1;

@end
