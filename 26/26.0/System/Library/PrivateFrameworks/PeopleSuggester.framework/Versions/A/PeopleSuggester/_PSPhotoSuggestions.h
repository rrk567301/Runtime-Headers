@interface _PSPhotoSuggestions : NSObject

+ (id)allOutstandingRequestsLock;
+ (void)cancelRequestWithToken:(id)a0;
+ (id)mdPersonIDsOfPeopleInSharedPhotoAttachments:(id)a0 forBundleID:(id)a1 shouldProcessPicturesLive:(BOOL)a2 shouldUseVIPModel:(BOOL)a3;
+ (id)peopleInSharedPhotoAttachments:(id)a0 forBundleID:(id)a1 shouldProcessPicturesLive:(BOOL)a2 shouldUseVIPModel:(BOOL)a3 withTraceID:(id)a4 withSpanID:(id)a5 shouldUseMDID:(BOOL)a6 withCompletion:(id /* block */)a7;
+ (id)phPersonIdentifiersOfPeopleInSharedPhotoAttachments:(id)a0 forBundleID:(id)a1 shouldProcessPicturesLive:(BOOL)a2 shouldUseVIPModel:(BOOL)a3 withTraceID:(id)a4 withSpanID:(id)a5 withCompletion:(id /* block */)a6;
+ (id)sharedMADService;
+ (id)suggestionTemplateForPhotoContactIdWithMessages:(id)a0 cdInteraction:(id)a1 reason:(id)a2 reasonType:(id)a3;

@end
