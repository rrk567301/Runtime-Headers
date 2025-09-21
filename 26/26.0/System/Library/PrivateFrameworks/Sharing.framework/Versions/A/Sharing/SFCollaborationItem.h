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
@property (nonatomic) BOOL defaultCollaboration;
@property (retain, nonatomic) NSNumber *canAddPeople;
@property (nonatomic) BOOL isLoadingMetadata;
@property (nonatomic) BOOL isLoadingOptions;
@property (nonatomic) BOOL isLoadingSendCopyRepresentation;
@property (nonatomic) BOOL isLoadingCanAddPeople;
@property (retain, nonatomic) LPLinkMetadata *linkMetadata;
@property (retain, nonatomic) NSError *metadataLoadError;
@property (retain, nonatomic) id sendCopyRepresentation;
@property (nonatomic) BOOL optionsChanged;
@property (retain, nonatomic) SFChangePublisher *changePublisher;
@property (readonly, copy, nonatomic) NSArray *sendCopyItems;
@property (readonly, copy, nonatomic) NSArray *sendCopyItemPlaceholderValues;
@property (copy, nonatomic) _SWCollaborationShareOptions *shareOptions;
@property (copy, nonatomic) NSArray *options;
@property (retain, nonatomic) SFCollaborationCloudSharingResult *cloudSharingResult;
@property (readonly, nonatomic) BOOL isLoading;
@property (readonly, nonatomic) BOOL isPostShare;
@property (readonly, copy, nonatomic) NSString *contentIdentifier;
@property (readonly, copy, nonatomic) NSString *additionalContentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)collaborationItemForFileURL:(id)a0 itemProvider:(id)a1 activityItem:(id)a2 defaultCollaboration:(BOOL)a3 managedFileURL:(id)a4;
+ (id)collaborationItemForItemProvider:(id)a0 activityItem:(id)a1 isURLProviderSupported:(BOOL)a2;

- (id)workQueue;
- (void)unregisterChangeObserver:(id)a0;
- (void)registerChangeObserver:(id)a0;
- (void).cxx_destruct;
- (BOOL)_canShowOptions;
- (id)_optionsSummary;
- (void)_didLoadSendCopyRepresentation:(id)a0;
- (id)_defaultLoadingOptionsSummary;
- (void)_didLoadMetadata:(id)a0;
- (void)_didLoadOptions:(id)a0 ckOptions:(id)a1;
- (void)_loadMetadataIfNeeded;
- (void)_loadOptionsIfNeeded;
- (void)_loadSendCopyRepresentationIfNeeded;
- (void)_startLoading;
- (void)_updateLoadingState;
- (id)createCollaborationFooterViewModel;
- (id)initWithItemProvider:(id)a0 activityItem:(id)a1 placeholderActivityItem:(id)a2 defaultCollaboration:(BOOL)a3;

@end
