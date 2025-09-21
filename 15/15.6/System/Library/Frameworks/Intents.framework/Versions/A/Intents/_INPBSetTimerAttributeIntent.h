@class NSString, _INPBDataString, _INPBTimer, _INPBIntentMetadata;

@interface _INPBSetTimerAttributeIntent : PBCodable <_INPBSetTimerAttributeIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char toDuration : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (retain, nonatomic) _INPBTimer *targetTimer;
@property (readonly, nonatomic) char hasTargetTimer;
@property (nonatomic) double toDuration;
@property (nonatomic) char hasToDuration;
@property (retain, nonatomic) _INPBDataString *toLabel;
@property (readonly, nonatomic) char hasToLabel;
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

@end
