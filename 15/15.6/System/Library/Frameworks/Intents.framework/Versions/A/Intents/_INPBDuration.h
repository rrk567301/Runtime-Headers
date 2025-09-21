@class NSString;

@interface _INPBDuration : PBCodable <_INPBDuration, NSSecureCoding, NSCopying> {
    struct { unsigned char nanos : 1; unsigned char seconds : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int nanos;
@property (nonatomic) char hasNanos;
@property (nonatomic) long long seconds;
@property (nonatomic) char hasSeconds;
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
