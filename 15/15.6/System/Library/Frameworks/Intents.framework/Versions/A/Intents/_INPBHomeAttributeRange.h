@class NSString;

@interface _INPBHomeAttributeRange : PBCodable <_INPBHomeAttributeRange, NSSecureCoding, NSCopying> {
    struct { unsigned char lowerValue : 1; unsigned char upperValue : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) double lowerValue;
@property (nonatomic) char hasLowerValue;
@property (nonatomic) double upperValue;
@property (nonatomic) char hasUpperValue;
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
