@class HDCloudSyncShareToParticipantOperation, HDCloudSyncShareSetupMetadata, NSNumber, CKUserIdentityLookupInfo;

@interface HDCloudSyncSetupSharingForUnifiedZoneTask : HDCloudSyncManagerPipelineTask {
    CKUserIdentityLookupInfo *_lookupInfo;
    char _requireExistingRelationship;
    NSNumber *_requireZoneDeviceMode;
    HDCloudSyncShareToParticipantOperation *_shareOperation;
}

@property (readonly, copy, nonatomic) HDCloudSyncShareSetupMetadata *shareSetupMetadata;

- (void).cxx_destruct;
- (id)initWithManager:(id)a0 context:(id)a1 lookupInfo:(id)a2 requireExistingRelationship:(char)a3 requireZoneDeviceMode:(id)a4 accessibilityAssertion:(id)a5 completion:(id /* block */)a6;
- (id)pipelineForRepository:(id)a0;

@end
