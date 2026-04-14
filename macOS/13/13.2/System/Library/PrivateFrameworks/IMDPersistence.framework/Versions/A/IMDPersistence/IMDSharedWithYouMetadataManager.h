@interface IMDSharedWithYouMetadataManager : NSObject

+ (id)Sha256ForData:(id)a0 withSalt:(id)a1;
+ (Class)LPSharedObjectMetadataClass;
+ (Class)LPSpecializationMetadataClass;
+ (id)tuManagerQueue;
+ (id)collaborationMetadataKey;

- (id)_pluginPayloadAttachmentPathsForItem:(id)a0;
- (id)updateAttributesWithSharedWithYouMetadata:(id)a0 withItem:(id)a1 chat:(id)a2;
- (id)_updateAttributesWithCollaborationMetadata:(id)a0 withItem:(id)a1 chat:(id)a2 shouldAddSharedWithYouMetadata:(BOOL)a3;
- (BOOL)chatDictionary:(id)a0 matchesFaceTimeConversation:(id)a1;
- (void)updateConversationManagerWithItem:(id)a0 chat:(id)a1 attributes:(id)a2;
- (id)highlightDictionaryFromAttributes:(id)a0 withItem:(id)a1 chat:(id)a2;
- (id)_uniqueIdentifierForResourceURL:(id)a0;
- (BOOL)_isLNKTypeMessage:(id)a0;
- (BOOL)_isAttachmentType:(id)a0;
- (id)titleFromLPLinkMetadata:(id)a0;
- (id)_lpLinkMetadataForItem:(id)a0 attachmentPaths:(id)a1 originalURL:(id)a2;
- (id)_indexTypeCustomKey;
- (id)_highlightedContentServerDateKey;
- (id)_syndicationContentTypeKey;
- (id)_collaborationIdentifierKey;
- (id)_ckBundleIDsKey;
- (id)_lpTitleCustomKey;

@end
