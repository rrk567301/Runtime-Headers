@interface _PSPhotoSuggestions : NSObject

+ (id)allOutstandingRequestsLock;
+ (void)cancelRequestWithToken:(id)a0;
+ (id)mdPersonIDsOfPeopleInSharedPhotoAttachments:(id)a0 forBundleID:(id)a1;
+ (id)peopleInSharedPhotoAttachments:(id)a0 forBundleID:(id)a1 shouldUseMDID:(BOOL)a2 withCompletion:(id /* block */)a3;
+ (id)phPersonIdentifiersOfPeopleInSharedPhotoAttachments:(id)a0 forBundleID:(id)a1 withCompletion:(id /* block */)a2;
+ (id)sharedMADService;
+ (id)suggestionTemplateForPhotoContactIdWithMessages:(id)a0 cdInteraction:(id)a1 reason:(id)a2 reasonType:(id)a3;

@end
