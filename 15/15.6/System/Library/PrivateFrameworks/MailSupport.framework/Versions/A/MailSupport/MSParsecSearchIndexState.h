@interface MSParsecSearchIndexState : NSObject

@property (readonly) long long indexType;
@property (readonly) long long percentMessagesIndexed;
@property (readonly) long long percentMessageBodiesIndexed;
@property (readonly) long long percentUnindexedBodiesInFrecent;
@property (readonly) long long percentAttachmentsIndexed;
@property (readonly) long long totalMessageCount;
@property (readonly) long long indexedMessageCount;

+ (id)indexStateForMessagesIndexed:(id)a0 messageBodiesIndexed:(id)a1 indexableMessages:(id)a2 percentUnindexedBodiesInFrecent:(id)a3 attachmentsIndexed:(id)a4 indexableAttachments:(id)a5;

- (id)description;
- (id)initWithPercentMessagesIndexed:(long long)a0 percentMessageBodiesIndexed:(long long)a1 percentUnindexedBodiesInFrecent:(long long)a2 percentAttachmentsIndexed:(long long)a3 totalMessageCount:(long long)a4 indexedMessageCount:(long long)a5 indexType:(long long)a6;

@end
