@class NSString, NSMutableSet, FBKGroupedDevice;
@protocol FBKAttachmentListenerDelegate, FBKFilerForm;

@interface FBKDECollector : NSObject <FBKAttachmentProvider>

@property (retain, nonatomic) NSString *bugSessionIdentifier;
@property (retain) NSMutableSet *_attachments;
@property (weak, nonatomic) id<FBKFilerForm> form;
@property (weak) id<FBKAttachmentListenerDelegate> listener;
@property BOOL loadingBugSession;
@property BOOL alreadyHandledURL;
@property (readonly, nonatomic) FBKGroupedDevice *device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)identifier;
- (id)platform;
- (id)attachments;
- (id)requirements;
- (void)removeAllAttachments;
- (void)removeAttachment:(id)a0;
- (id)bugSession;
- (void)_addAttachment:(id)a0;
- (BOOL)hasFilePromises;
- (void)_updateAttachment:(id)a0 withState:(long long)a1;
- (void)_removeAttachment:(id)a0;
- (void)cancelCollection:(id)a0;
- (BOOL)hasUnmetRequirements;
- (void)updateRequirements:(id)a0;
- (void)_updateAttachmentsWithRequirements:(id)a0 alreadyCollectedGroups:(id)a1 alreadyStartedCollections:(id)a2;
- (void)processURLExtensions:(id)a0 withMatcherPredicates:(id)a1;
- (void)gatherFilesForAttachment:(id)a0 answers:(id)a1;
- (id)parametersFromAnswers:(id)a0;
- (void)_didCollectGroup:(id)a0 forAttachment:(id)a1;
- (id)processOngoingDECollections:(id)a0 withRequirements:(id)a1;
- (id)processAlreadyCollectedGroups:(id)a0 withRequirements:(id)a1;
- (id)attachmentFromRequirement:(id)a0 withExtension:(id)a1;
- (id)attachmentFromRequirement:(id)a0 withExtension:(id)a1 urlExtension:(id)a2;
- (id)bundleIDsFromAreas:(id)a0;
- (id)initWithRequirements:(id)a0 forDevice:(id)a1 filerForm:(id)a2 extensionsFromURL:(id)a3 listener:(id)a4;
- (id)gatherFilesForExtension:(id)a0 answers:(id)a1;
- (id)collectorError;

@end
