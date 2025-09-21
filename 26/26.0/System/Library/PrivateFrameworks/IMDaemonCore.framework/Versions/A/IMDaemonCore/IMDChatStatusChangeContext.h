@class NSString, NSArray, IMDAccount;

@interface IMDChatStatusChangeContext : NSObject

@property (nonatomic) int chatStatus;
@property (retain, nonatomic) NSString *chatIdentifier;
@property (nonatomic) unsigned char chatStyle;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *groupID;
@property (retain, nonatomic) NSString *originalGroupID;
@property (retain, nonatomic) NSString *lastAddressedHandle;
@property (retain, nonatomic) NSString *lastAddressedSIMID;
@property (retain, nonatomic) NSArray *handleInfo;
@property (retain, nonatomic) IMDAccount *account;
@property (nonatomic) long long category;
@property (retain, nonatomic) NSString *extensionName;
@property (nonatomic) BOOL isBlackholed;
@property (retain, nonatomic) NSString *messageID;
@property (nonatomic) BOOL isMessageSentFromMe;
@property (nonatomic) long long spamDetectionSource;

- (void).cxx_destruct;

@end
