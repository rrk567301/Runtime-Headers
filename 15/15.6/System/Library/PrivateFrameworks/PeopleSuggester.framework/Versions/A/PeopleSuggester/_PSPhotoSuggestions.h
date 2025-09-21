@interface _PSPhotoSuggestions : NSObject

+ (id)allOutstandingRequestsLock;
+ (void)cancelRequestWithToken:(id)a0;
+ (id)mdPersonIDsOfPeopleInSharedPhotoAttachments:(id)a0 forBundleID:(id)a1 shouldProcessPicturesLive:(char)a2;
+ (id)peopleInSharedPhotoAttachments:(id)a0 forBundleID:(id)a1 shouldProcessPicturesLive:(char)a2 withTraceID:(id)a3 withSpanID:(id)a4 shouldUseMDID:(char)a5 withCompletion:(id /* block */)a6;
+ (id)phPersonIdentifiersOfPeopleInSharedPhotoAttachments:(id)a0 forBundleID:(id)a1 shouldProcessPicturesLive:(char)a2 withTraceID:(id)a3 withSpanID:(id)a4 withCompletion:(id /* block */)a5;
+ (id)sharedMADService;
+ (id)suggestionTemplateForPhotoContactIdWithMessages:(id)a0 cdInteraction:(id)a1 reason:(id)a2 reasonType:(id)a3;

@end
