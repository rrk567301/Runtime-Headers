@class NSString, NSSet;

@interface IMServiceReachabilityContext : NSObject <NSSecureCoding, NSCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *chatIdentifier;
@property (nonatomic) unsigned char chatStyle;
@property (nonatomic) char shouldForceServerStatusRefresh;
@property (nonatomic) char forceMMS;
@property (nonatomic) char conversationWasDowngraded;
@property (nonatomic) char hasConversationHistory;
@property (nonatomic) char isForPendingConversation;
@property (nonatomic) char requestPersistentMenu;
@property (nonatomic) char requestBrandInfo;
@property (retain, nonatomic) NSSet *preconditionsIgnoredForServices;
@property (retain, nonatomic) NSString *senderLastAddressedHandle;
@property (retain, nonatomic) NSString *senderLastAddressedSIMID;
@property (retain, nonatomic) NSString *lastUsedServiceName;
@property (retain, nonatomic) NSString *serviceOfLastMessage;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_signature;
- (id)createDictionary;

@end
