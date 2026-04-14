@interface IMTUConversationItem : IMItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long flags;


- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)copyDictionaryRepresentation;
- (id)conversationUUID;
- (BOOL)isFromMe;

@end
