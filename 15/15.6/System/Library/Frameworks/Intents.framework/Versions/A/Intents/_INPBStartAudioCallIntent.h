@class NSArray, _INPBStartCallRequestMetadata, NSString, _INPBIntentMetadata;

@interface _INPBStartAudioCallIntent : PBCodable <_INPBStartAudioCallIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char audioRoute : 1; unsigned char destinationType : 1; unsigned char preferredCallProvider : 1; unsigned char recordTypeForRedialing : 1; unsigned char ttyType : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int audioRoute;
@property (nonatomic) char hasAudioRoute;
@property (retain, nonatomic) _INPBStartCallRequestMetadata *callRequestMetadata;
@property (readonly, nonatomic) char hasCallRequestMetadata;
@property (copy, nonatomic) NSArray *contacts;
@property (readonly, nonatomic) unsigned long long contactsCount;
@property (nonatomic) int destinationType;
@property (nonatomic) char hasDestinationType;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (nonatomic) int preferredCallProvider;
@property (nonatomic) char hasPreferredCallProvider;
@property (nonatomic) int recordTypeForRedialing;
@property (nonatomic) char hasRecordTypeForRedialing;
@property (copy, nonatomic) NSArray *targetContacts;
@property (readonly, nonatomic) unsigned long long targetContactsCount;
@property (nonatomic) int ttyType;
@property (nonatomic) char hasTtyType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)contactType;
+ (Class)targetContactsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsDestinationType:(id)a0;
- (id)destinationTypeAsString:(int)a0;
- (void)addContact:(id)a0;
- (int)StringAsAudioRoute:(id)a0;
- (int)StringAsPreferredCallProvider:(id)a0;
- (int)StringAsTTYType:(id)a0;
- (id)recordTypeForRedialingAsString:(int)a0;
- (int)StringAsRecordTypeForRedialing:(id)a0;
- (id)contactAtIndex:(unsigned long long)a0;
- (void)addTargetContacts:(id)a0;
- (id)audioRouteAsString:(int)a0;
- (void)clearContacts;
- (void)clearTargetContacts;
- (id)preferredCallProviderAsString:(int)a0;
- (id)targetContactsAtIndex:(unsigned long long)a0;
- (id)ttyTypeAsString:(int)a0;

@end
