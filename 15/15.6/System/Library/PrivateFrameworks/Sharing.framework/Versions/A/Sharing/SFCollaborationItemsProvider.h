@class NSArray, NSString, NSURL, _SFCollaborationItemsRequest;
@protocol SFCollaborationItemsProviderDelegate;

@interface SFCollaborationItemsProvider : NSObject <_SFCollaborationItemsRequestDelegate>

@property (copy, nonatomic) NSArray *collaborationItems;
@property (retain, nonatomic) _SFCollaborationItemsRequest *currentRequest;
@property (readonly, nonatomic) char supportsMultipleCollaboration;
@property (copy, nonatomic) NSArray *activityItems;
@property (weak, nonatomic) id<SFCollaborationItemsProviderDelegate> delegate;
@property (readonly, copy, nonatomic) NSURL *managedFileURL;
@property (readonly, nonatomic) char isURLProviderSupported;
@property (readonly, nonatomic) char multipleCollaborationItems;
@property (readonly, nonatomic) char supportsCollaboration;
@property (readonly, nonatomic) char supportsSendCopy;
@property (readonly, copy, nonatomic) NSArray *placeholderActivityItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_didCompleteCollaborationItems:(id)a0;
- (id)initWithActivityItems:(id)a0 delegate:(id)a1;
- (void)_updateCollaborationItems;
- (id)activityItemsForActivity:(id)a0 collaborationResult:(id)a1;
- (id)activityItemsForActivity:(id)a0 collaborationResult:(id)a1 isCollaborative:(char)a2;
- (id)collaborationItemForActivityItem:(id)a0;
- (id)collaborationItemsRequest:(id)a0 resolveActivityItem:(id)a1;
- (id)collaborationServiceForItemsRequest:(id)a0;
- (id)initWithActivityItems:(id)a0 delegate:(id)a1 managedFileURL:(id)a2 isURLProviderSupported:(char)a3;

@end
