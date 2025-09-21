@class NSString, IMMessageItem, IMItem;

@interface IMReplyContextTranscriptPluginChatItem : IMTranscriptPluginChatItem <IMReplyContext>

@property (retain, nonatomic) IMItem *_parentItem;
@property (nonatomic) char replyIsFromMe;
@property (copy, nonatomic) NSString *replyMessageGUID;
@property (readonly, nonatomic) IMMessageItem *messageItem;

- (void).cxx_destruct;
- (char)canDelete;
- (id)_initWithItem:(id)a0 parentItem:(id)a1 replyMessageGUID:(id)a2 replyIsFromMe:(char)a3 initialPayload:(id)a4 index:(long long)a5 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6 parentChatHasKnownParticipants:(char)a7 chatContext:(id)a8;
- (char)isReplyContextPreview;

@end
