@class NSDictionary;

@interface IMTUConversationItem : IMItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long flags;
@property (nonatomic) unsigned long long avMode;
@property (readonly, nonatomic) NSDictionary *messageSummaryInfo;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (char)isFromMe;
- (id)conversationUUID;
- (id)copyDictionaryRepresentation;
- (id)initWithSender:(id)a0 time:(id)a1 guid:(id)a2 messageSummaryInfo:(id)a3;

@end
