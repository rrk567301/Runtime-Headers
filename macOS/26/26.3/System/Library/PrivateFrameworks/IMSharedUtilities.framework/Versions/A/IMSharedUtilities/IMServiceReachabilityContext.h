@class NSString, NSNumber, NSSet;

@interface IMServiceReachabilityContext : NSObject <NSSecureCoding, NSCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *chatIdentifier;
@property (nonatomic) unsigned char chatStyle;
@property (nonatomic) BOOL shouldForceServerStatusRefresh;
@property (nonatomic) BOOL forceMMS;
@property (nonatomic) BOOL conversationWasDowngraded;
@property (nonatomic) BOOL hasConversationHistory;
@property (nonatomic) BOOL isForPendingConversation;
@property (nonatomic) BOOL requestPersistentMenu;
@property (nonatomic) BOOL requestBrandInfo;
@property (retain, nonatomic) NSNumber *shouldAttemptLocalRCS;
@property (retain, nonatomic) NSSet *preconditionsIgnoredForServices;
@property (retain, nonatomic) NSString *senderLastAddressedHandle;
@property (retain, nonatomic) NSString *senderLastAddressedSIMID;
@property (retain, nonatomic) NSString *lastUsedServiceName;
@property (retain, nonatomic) NSString *serviceOfLastMessage;
@property (nonatomic) BOOL lastMessageSupportsEncryption;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_signature;
- (id)createDictionary;

@end
