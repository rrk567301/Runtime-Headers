@class NSString, _INPBUserActivity, _INPBIntentResponsePayloadFailure, _INPBIntentResponsePayloadSuccess;

@interface _INPBIntentResponse : PBCodable <_INPBIntentResponse, NSSecureCoding, NSCopying> {
    struct { unsigned char requiresAuthentication : 1; unsigned char requiresProtectedData : 1; unsigned char type : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBIntentResponsePayloadFailure *payloadFailure;
@property (readonly, nonatomic) char hasPayloadFailure;
@property (retain, nonatomic) _INPBIntentResponsePayloadSuccess *payloadSuccess;
@property (readonly, nonatomic) char hasPayloadSuccess;
@property (nonatomic) char requiresAuthentication;
@property (nonatomic) char hasRequiresAuthentication;
@property (nonatomic) char requiresProtectedData;
@property (nonatomic) char hasRequiresProtectedData;
@property (nonatomic) int type;
@property (nonatomic) char hasType;
@property (retain, nonatomic) _INPBUserActivity *userActivity;
@property (readonly, nonatomic) char hasUserActivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;

@end
