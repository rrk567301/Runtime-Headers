@interface SMDeepLinkURLFactory : NSObject

+ (id)_generateCommonQueryItemsWithCompose:(BOOL)a0 groupID:(id)a1;
+ (id)createURLForGroupID:(id)a0 recipientHandles:(id)a1 compose:(BOOL)a2;
+ (id)createURLForRecipientHandle:(id)a0 compose:(BOOL)a1;
+ (id)createURLToConversationForGroupID:(id)a0;
+ (id)createURLToConversationForRecipientHandle:(id)a0;
+ (id)createURLToDetailViewForGroupID:(id)a0 recipientHandles:(id)a1;
+ (id)createURLToDetailViewForRecipientHandle:(id)a0;
+ (long long)resolvePayloadTypeFromURL:(id)a0;

@end
