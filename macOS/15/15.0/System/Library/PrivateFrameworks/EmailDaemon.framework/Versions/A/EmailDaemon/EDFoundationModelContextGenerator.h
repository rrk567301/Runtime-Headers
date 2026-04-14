@interface EDFoundationModelContextGenerator : NSObject

+ (id)log;
+ (id)_messageInReplyToMessage:(id)a0 messagePersistence:(id)a1 error:(id *)a2;
+ (id)originalContentMessageForMessage:(id)a0 limitOfInReplyToAncestors:(unsigned long long)a1 checkForForwardedMessages:(BOOL)a2 messagePersistence:(id)a3 htmlStringFromMessage:(id /* block */)a4 error:(id *)a5;
+ (id)originalContentMessageForPersistedMessage:(id)a0 htmlStringFromMessage:(id /* block */)a1;
+ (id)originalContentMessagesForPersistedMessages:(id)a0 htmlStringFromMessage:(id /* block */)a1;

@end
