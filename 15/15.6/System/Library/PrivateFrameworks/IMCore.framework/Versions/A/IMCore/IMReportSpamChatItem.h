@interface IMReportSpamChatItem : IMTranscriptChatItem

@property (readonly, nonatomic) char wasReportedAsSpam;
@property (readonly, nonatomic) char isGroupMessage;
@property (readonly, nonatomic) char hasMultipleMessages;
@property (readonly, nonatomic) char showReportSMSSpam;
@property (readonly, nonatomic) char isBusinessChat;

- (id)_initWithItem:(id)a0 wasReportedAsSpam:(char)a1 isGroup:(char)a2 hasMultipleMessages:(char)a3 showReportSMSSpam:(char)a4 isBusinessChat:(char)a5;

@end
