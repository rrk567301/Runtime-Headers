@class NSString;

@interface IMReplyContextDeletedMessageChatItem : IMReplyContextTextMessagePartChatItem <IMReplyContext>

@property (nonatomic) char deletedMessageIsFromMe;
@property (readonly, nonatomic) char replyIsFromMe;
@property (readonly, copy, nonatomic) NSString *replyMessageGUID;

@end
