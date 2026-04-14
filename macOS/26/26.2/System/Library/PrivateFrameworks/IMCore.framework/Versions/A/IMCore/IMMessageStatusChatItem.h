@class IMHandle, NSString, IMServiceImpl, NSDate, NSAttributedString;

@interface IMMessageStatusChatItem : IMTranscriptChatItem <IMChatTranscriptStatusItem>

@property (readonly, nonatomic) long long messageStatusType;
@property (readonly, nonatomic) long long statusType;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) NSDate *time;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSString *errorText;
@property (readonly, nonatomic) long long expireStatusType;
@property (readonly, nonatomic) NSDate *timeAdded;
@property (readonly, nonatomic) NSDate *timeStale;
@property (copy, nonatomic) NSString *recipientDisplayName;
@property (readonly, nonatomic) unsigned long long statusItemSequenceNumber;
@property (readonly, nonatomic) NSDate *dateOfStatus;
@property (readonly, nonatomic, getter=isFromMe) BOOL fromMe;
@property (readonly, nonatomic) BOOL wantsTail;
@property (readonly, copy, nonatomic) NSAttributedString *transcriptText;
@property (readonly, copy, nonatomic) NSAttributedString *alternateTranscriptText;
@property (readonly, nonatomic) NSDate *transcriptDate;
@property (readonly, nonatomic) IMServiceImpl *service;
@property (readonly, nonatomic) IMHandle *handle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
