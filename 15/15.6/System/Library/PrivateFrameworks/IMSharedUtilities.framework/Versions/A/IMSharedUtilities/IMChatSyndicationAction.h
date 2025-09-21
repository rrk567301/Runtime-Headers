@interface IMChatSyndicationAction : IMSyndicationAction

@property (readonly, nonatomic, getter=isAutoDonatingMessages) char autoDonateMessages;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (char)autoSyndicateMessages;
- (id)initWithChatGUID:(id)a0 syndicationStartDate:(id)a1 autoDonateMessages:(char)a2;
- (id)initWithChatGUID:(id)a0 syndicationStartDate:(id)a1 autoDonateMessages:(char)a2 version:(unsigned char)a3;
- (id)initWithChatGUID:(id)a0 syndicationStartDate:(id)a1 deserializedSyndicationActionType:(unsigned char)a2 version:(unsigned char)a3;
- (unsigned char)syndicatedItemType;

@end
