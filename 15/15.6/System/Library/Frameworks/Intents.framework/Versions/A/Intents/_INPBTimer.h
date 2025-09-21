@class NSString, _INPBDataString;

@interface _INPBTimer : PBCodable <_INPBTimer, NSSecureCoding, NSCopying> {
    struct { unsigned char duration : 1; unsigned char remainingTime : 1; unsigned char state : 1; unsigned char type : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) double duration;
@property (nonatomic) char hasDuration;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) _INPBDataString *label;
@property (readonly, nonatomic) char hasLabel;
@property (nonatomic) double remainingTime;
@property (nonatomic) char hasRemainingTime;
@property (nonatomic) int state;
@property (nonatomic) char hasState;
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
- (int)StringAsState:(id)a0;
- (id)stateAsString:(int)a0;

@end
