@class _INPBPayloadSuccess, _INPBPayloadNeedsExecuteIntent, _INPBPayloadUnsupported, _INPBPayloadNeedsDisambiguation, _INPBPayloadNeedsValue, NSString, _INPBPayloadConfirmation;

@interface _INPBIntentSlotResolutionResult : PBCodable <_INPBIntentSlotResolutionResult, NSSecureCoding, NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBPayloadConfirmation *payloadConfirmation;
@property (readonly, nonatomic) char hasPayloadConfirmation;
@property (retain, nonatomic) _INPBPayloadNeedsDisambiguation *payloadNeedsDisambiguation;
@property (readonly, nonatomic) char hasPayloadNeedsDisambiguation;
@property (retain, nonatomic) _INPBPayloadNeedsExecuteIntent *payloadNeedsExecuteIntent;
@property (readonly, nonatomic) char hasPayloadNeedsExecuteIntent;
@property (retain, nonatomic) _INPBPayloadNeedsValue *payloadNeedsValue;
@property (readonly, nonatomic) char hasPayloadNeedsValue;
@property (retain, nonatomic) _INPBPayloadSuccess *payloadSuccess;
@property (readonly, nonatomic) char hasPayloadSuccess;
@property (retain, nonatomic) _INPBPayloadUnsupported *payloadUnsupported;
@property (readonly, nonatomic) char hasPayloadUnsupported;
@property (nonatomic) int type;
@property (nonatomic) char hasType;
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
