@class NSString, IMItem;

@interface IMMessageReplyCountChatItem : IMMessageStatusChatItem <IMReplyContext> {
    NSString *_threadIdentifier;
}

@property (retain, nonatomic) IMItem *_parentItem;
@property (readonly, nonatomic) char replyIsFromMe;
@property (readonly, copy, nonatomic) NSString *replyMessageGUID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)threadIdentifier;
- (id)_initWithItem:(id)a0 parentItem:(id)a1 threadIdentifier:(id)a2 replyMessageGUID:(id)a3 replyIsFromMe:(char)a4 count:(unsigned long long)a5 statusItemSequenceNumber:(unsigned long long)a6;
- (id)copyWithStatusItemSequenceNumber:(unsigned long long)a0;

@end
