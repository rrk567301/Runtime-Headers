@class CKContainerSetupInfo, CKShare, _SWCollaborationShareOptions, SFCollaborationMetadata, NSItemProvider, NSString, SFCollaborationCloudSharingResult, CKAllowedSharingOptions, NSArray, LPLinkMetadata, NSNumber, NSError, NSUUID;

@interface _SFCKShareCollaborationItem : SFCollaborationItem <SFCollaborationCKShareItem>

@property (retain, nonatomic) CKContainerSetupInfo *containerSetupInfo;
@property (nonatomic) char isLoadingContainerSetupInfo;
@property (retain, nonatomic) LPLinkMetadata *postSharelinkMetadata;
@property (readonly, nonatomic) char isServiceManatee;
@property (retain, nonatomic) CKAllowedSharingOptions *ckOptions;
@property (retain, nonatomic) CKShare *updatedShare;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSItemProvider *itemProvider;
@property (readonly, nonatomic) char defaultCollaboration;
@property (readonly, copy, nonatomic) NSArray *sendCopyItems;
@property (readonly, copy, nonatomic) NSArray *sendCopyItemPlaceholderValues;
@property (readonly, nonatomic) id placeholderActivityItem;
@property (readonly, nonatomic) id activityItem;
@property (readonly, nonatomic) id sendCopyRepresentation;
@property (readonly, nonatomic) SFCollaborationMetadata *metadata;
@property (copy, nonatomic) _SWCollaborationShareOptions *shareOptions;
@property (copy, nonatomic) NSArray *options;
@property (retain, nonatomic) SFCollaborationCloudSharingResult *cloudSharingResult;
@property (readonly, nonatomic) NSNumber *canAddPeople;
@property (readonly, nonatomic) char isLoading;
@property (readonly, copy, nonatomic) NSString *contentIdentifier;
@property (readonly, copy, nonatomic) NSString *additionalContentIdentifier;
@property (readonly, nonatomic) LPLinkMetadata *linkMetadata;
@property (readonly, nonatomic) NSError *metadataLoadError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)_canShowOptions;
- (id)_defaultLoadingOptionsSummary;
- (void)_didLoadContainerSetupInfo:(id)a0;
- (void)_loadCKContainerSetupInfoIfNeeded;
- (void)_startLoading;
- (id)initWithItemProvider:(id)a0 activityItem:(id)a1;

@end
