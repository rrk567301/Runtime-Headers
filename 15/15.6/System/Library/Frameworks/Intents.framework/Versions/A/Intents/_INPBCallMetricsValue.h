@class NSString;

@interface _INPBCallMetricsValue : PBCodable <_INPBCallMetricsValue, NSSecureCoding, NSCopying> {
    struct { unsigned char callDuration : 1; unsigned char timeToEstablish : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) double callDuration;
@property (nonatomic) char hasCallDuration;
@property (nonatomic) double timeToEstablish;
@property (nonatomic) char hasTimeToEstablish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
