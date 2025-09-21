@class NSArray, NSString, _INPBConnectedCall;

@interface _INPBStartCallIntentResponse : PBCodable <_INPBStartCallIntentResponse, NSSecureCoding, NSCopying> {
    struct { unsigned char confirmationReason : 1; unsigned char shouldDoEmergencyCountdown : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int confirmationReason;
@property (nonatomic) char hasConfirmationReason;
@property (copy, nonatomic) NSArray *restrictedContacts;
@property (readonly, nonatomic) unsigned long long restrictedContactsCount;
@property (nonatomic) char shouldDoEmergencyCountdown;
@property (nonatomic) char hasShouldDoEmergencyCountdown;
@property (retain, nonatomic) _INPBConnectedCall *startedCall;
@property (readonly, nonatomic) char hasStartedCall;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)restrictedContactsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsConfirmationReason:(id)a0;
- (void)addRestrictedContacts:(id)a0;
- (void)clearRestrictedContacts;
- (id)confirmationReasonAsString:(int)a0;
- (id)restrictedContactsAtIndex:(unsigned long long)a0;

@end
