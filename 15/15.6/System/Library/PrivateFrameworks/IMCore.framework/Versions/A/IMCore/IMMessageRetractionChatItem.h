@class IMHandle, NSArray, IMMessage, IMMessageItem, NSString;

@interface IMMessageRetractionChatItem : IMTranscriptChatItem

@property (readonly, copy, nonatomic) IMHandle *sender;
@property (readonly, nonatomic) char isFromMe;
@property (readonly, nonatomic) char isFailedRetraction;
@property (readonly, nonatomic) char canRetryFailedRetraction;
@property (readonly, nonatomic) long long partIndex;
@property (readonly, copy, nonatomic) NSArray *retractionUnsupportedByHandles;
@property (readonly, nonatomic) IMMessage *message;
@property (readonly, nonatomic) IMMessageItem *messageItem;
@property (readonly, copy, nonatomic) NSString *messageGUID;
@property (readonly, nonatomic) unsigned long long replyCount;
@property (readonly, copy, nonatomic) NSString *threadIdentifier;

- (void).cxx_destruct;
- (char)canDelete;
- (id)_initWithItem:(id)a0 partIndex:(long long)a1 isFailedRetraction:(char)a2 retractionUnsupportedByHandles:(id)a3 sender:(id)a4 isFromMe:(char)a5;
- (id)_retractedMessageItem;

@end
