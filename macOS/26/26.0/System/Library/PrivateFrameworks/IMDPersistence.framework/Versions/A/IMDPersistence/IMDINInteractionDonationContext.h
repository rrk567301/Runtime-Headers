@class NSString, NSArray, NSDate;

@interface IMDINInteractionDonationContext : NSObject

@property (retain, nonatomic) NSString *messageGUID;
@property (retain, nonatomic) NSString *messagePlainBody;
@property (retain, nonatomic) NSDate *messageDate;
@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSString *senderHandleID;
@property (retain, nonatomic) NSString *uncanonicalizedSenderHandleID;
@property (retain, nonatomic) NSString *chatGUID;
@property (retain, nonatomic) NSString *chatIdentifier;
@property (retain, nonatomic) NSString *chatDisplayName;
@property (nonatomic) unsigned char chatStyle;
@property (retain, nonatomic) NSArray *chatParticipants;
@property (retain, nonatomic) NSString *chatLastAddressedLocaleHandle;
@property (retain, nonatomic) NSString *groupPhotoGuid;
@property (retain, nonatomic) NSString *groupPhotoInternalFilePath;
@property (nonatomic) BOOL isMentionOfMe;
@property (nonatomic) BOOL isReplyToMe;
@property (nonatomic) BOOL isNotifyAnyway;
@property (nonatomic) BOOL isMergedBusinessThread;

- (void).cxx_destruct;
- (id)initWithIndexableChatDictionary:(id)a0 messageDictionary:(id)a1;

@end
