@class NSString;

@interface _INPBNumericSettingValue : PBCodable <_INPBNumericSettingValue, NSSecureCoding, NSCopying> {
    struct { unsigned char unit : 1; unsigned char value : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int unit;
@property (nonatomic) char hasUnit;
@property (nonatomic) double value;
@property (nonatomic) char hasValue;
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
- (int)StringAsUnit:(id)a0;
- (id)unitAsString:(int)a0;

@end
