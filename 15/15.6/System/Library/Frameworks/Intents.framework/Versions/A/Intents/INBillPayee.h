@class INSpeakableString, NSString;

@interface INBillPayee : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) INSpeakableString *nickname;
@property (readonly, copy) NSString *accountNumber;
@property (readonly, copy) INSpeakableString *organizationName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (id)_intents_readableTitleWithLocalizer:(id)a0 metadata:(id)a1;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithNickname:(id)a0 number:(id)a1 organizationName:(id)a2;

@end
