@class NSUUID, SFCollaborationCloudSharingResult, NSArray, NSString, NSItemProvider, SFCollaborationMetadata, SFCollaborationShareOptions, CKContainerSetupInfo, LPLinkMetadata;

@interface _SFCKShareCollaborationItem : SFCollaborationItem <SFCollaborationCKShareItem>

@property (retain, nonatomic) CKContainerSetupInfo *containerSetupInfo;
@property (nonatomic) BOOL isLoadingContainerSetupInfo;
@property (retain, nonatomic) LPLinkMetadata *postSharelinkMetadata;
@property (readonly, nonatomic) BOOL isServiceManatee;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSItemProvider *itemProvider;
@property (readonly, nonatomic) BOOL defaultCollaboration;
@property (readonly, copy, nonatomic) NSArray *sendCopyItems;
@property (readonly, copy, nonatomic) NSArray *sendCopyItemPlaceholderValues;
@property (readonly, nonatomic) id placeholderActivityItem;
@property (readonly, nonatomic) id activityItem;
@property (readonly, nonatomic) id sendCopyRepresentation;
@property (readonly, nonatomic) SFCollaborationMetadata *metadata;
@property (copy, nonatomic) SFCollaborationShareOptions *shareOptions;
@property (copy, nonatomic) NSArray *options;
@property (retain, nonatomic) SFCollaborationCloudSharingResult *cloudSharingResult;
@property (readonly, nonatomic) BOOL isLoading;
@property (readonly, copy, nonatomic) NSString *contentIdentifier;
@property (readonly, copy, nonatomic) NSString *additionalContentIdentifier;
@property (readonly, nonatomic) LPLinkMetadata *linkMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_startLoading;
- (id)_defaultLoadingOptionsSummary;
- (BOOL)_canShowOptions;
- (id)initWithItemProvider:(id)a0 activityItem:(id)a1;
- (void)_loadCKContainerSetupInfoIfNeeded;
- (void)_didLoadContainerSetupInfo:(id)a0;

@end
