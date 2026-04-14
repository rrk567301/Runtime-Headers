@class NSArray, NSString, CSPerson;

@interface SGTextMessage : SGMessage

@property (retain) CSPerson *sender;
@property (retain) NSArray *recipients;
@property (retain) NSString *conversationIdentifier;
@property BOOL senderIsAccountOwner;
@property (retain) NSString *nickname;
@property (retain) NSString *photoPath;
@property (readonly) BOOL senderIsBusinessChat;
@property (readonly) NSString *attachmentFilename;
@property (readonly, nonatomic) BOOL isPotentialEventMessage;
@property (readonly, getter=isTapBack) BOOL tapBack;

+ (BOOL)isSent:(id)a0;
+ (id)_nicknameCustomKey;
+ (id)_photoPathCustomKey;

- (void).cxx_destruct;
- (id)initWithSearchableItem:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)author;
- (id)spotlightBundleIdentifier;
- (id)spotlightDomainIdentifier;
- (id)initWithMessageDictionary:(id)a0;
- (id)initWithMessagesContentEvent:(id)a0 contentProtection:(id)a1;

@end
