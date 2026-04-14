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

+ (id)_nicknameCustomKey;
+ (id)_photoPathCustomKey;
+ (BOOL)isSent:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithSearchableItem:(id)a0;
- (id)author;
- (id)initWithMessageDictionary:(id)a0;
- (id)initWithMessagesContentEvent:(id)a0 contentProtection:(id)a1;
- (id)spotlightBundleIdentifier;
- (id)spotlightDomainIdentifier;

@end
