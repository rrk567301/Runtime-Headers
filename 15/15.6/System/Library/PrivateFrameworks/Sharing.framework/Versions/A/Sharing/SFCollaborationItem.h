@class NSUUID, NSError, NSArray, _SWCollaborationShareOptions, NSItemProvider, SFCollaborationCloudSharingResult, SFCollaborationMetadata, NSString, LPLinkMetadata, NSNumber, SFChangePublisher;

@interface SFCollaborationItem : NSObject <SFCollaborationItem>

@property (copy, nonatomic) NSUUID *identifier;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSItemProvider *itemProvider;
@property (retain, nonatomic) id activityItem;
@property (retain, nonatomic) id placeholderActivityItem;
@property (copy, nonatomic) NSArray *sendCopyActivityItems;
@property (copy, nonatomic) NSArray *sendCopyActivityItemValues;
@property (retain, nonatomic) SFCollaborationMetadata *metadata;
@property (nonatomic) char defaultCollaboration;
@property (retain, nonatomic) NSNumber *canAddPeople;
@property (nonatomic) char isLoadingMetadata;
@property (nonatomic) char isLoadingOptions;
@property (nonatomic) char isLoadingSendCopyRepresentation;
@property (nonatomic) char isLoadingCanAddPeople;
@property (retain, nonatomic) LPLinkMetadata *linkMetadata;
@property (retain, nonatomic) NSError *metadataLoadError;
@property (retain, nonatomic) id sendCopyRepresentation;
@property (retain, nonatomic) SFChangePublisher *changePublisher;
@property (readonly, copy, nonatomic) NSArray *sendCopyItems;
@property (readonly, copy, nonatomic) NSArray *sendCopyItemPlaceholderValues;
@property (copy, nonatomic) _SWCollaborationShareOptions *shareOptions;
@property (copy, nonatomic) NSArray *options;
@property (retain, nonatomic) SFCollaborationCloudSharingResult *cloudSharingResult;
@property (readonly, nonatomic) char isLoading;
@property (readonly, copy, nonatomic) NSString *contentIdentifier;
@property (readonly, copy, nonatomic) NSString *additionalContentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)collaborationItemForFileURL:(id)a0 itemProvider:(id)a1 activityItem:(id)a2 defaultCollaboration:(char)a3 managedFileURL:(id)a4;
+ (id)collaborationItemForItemProvider:(id)a0 activityItem:(id)a1 isURLProviderSupported:(char)a2;

- (void).cxx_destruct;
- (id)workQueue;
- (void)_didLoadSendCopyRepresentation:(id)a0;
- (id)_optionsSummary;
- (char)_canShowOptions;
- (id)_defaultLoadingOptionsSummary;
- (void)_didLoadMetadata:(id)a0;
- (void)_didLoadOptions:(id)a0 ckOptions:(id)a1;
- (void)_loadMetadataIfNeeded;
- (void)_loadOptionsIfNeeded;
- (void)_loadSendCopyRepresentationIfNeeded;
- (void)_startLoading;
- (void)_updateLoadingState;
- (id)createCollaborationFooterViewModel;
- (id)initWithItemProvider:(id)a0 activityItem:(id)a1 placeholderActivityItem:(id)a2 defaultCollaboration:(char)a3;
- (void)registerChangeObserver:(id)a0;
- (void)unregisterChangeObserver:(id)a0;

@end
