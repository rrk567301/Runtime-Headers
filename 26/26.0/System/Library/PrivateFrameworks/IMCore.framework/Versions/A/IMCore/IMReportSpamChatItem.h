@class NSString;

@interface IMReportSpamChatItem : IMTranscriptChatItem

@property (readonly, nonatomic) BOOL wasReportedAsSpam;
@property (readonly, nonatomic) BOOL isGroupMessage;
@property (readonly, nonatomic) BOOL hasMultipleMessages;
@property (readonly, nonatomic) BOOL showReportSMSSpam;
@property (readonly, nonatomic) BOOL isBusinessChat;
@property (readonly, nonatomic) BOOL canUnsubscribe;
@property (readonly, copy, nonatomic) NSString *filterExtension;

- (void).cxx_destruct;
- (id)_initWithItem:(id)a0 wasReportedAsSpam:(BOOL)a1 isGroup:(BOOL)a2 hasMultipleMessages:(BOOL)a3 showReportSMSSpam:(BOOL)a4 isBusinessChat:(BOOL)a5 canUnsubscribe:(BOOL)a6 filterExtension:(id)a7;

@end
