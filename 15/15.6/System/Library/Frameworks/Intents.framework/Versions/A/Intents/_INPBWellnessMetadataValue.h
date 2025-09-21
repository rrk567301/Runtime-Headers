@class NSString, _INPBInteger, _INPBString, _INPBDouble;

@interface _INPBWellnessMetadataValue : PBCodable <_INPBWellnessMetadataValue, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBDouble *pbDoubleValue;
@property (readonly, nonatomic) char hasPbDoubleValue;
@property (retain, nonatomic) _INPBInteger *ordinalValue;
@property (readonly, nonatomic) char hasOrdinalValue;
@property (retain, nonatomic) _INPBString *pbStringValue;
@property (readonly, nonatomic) char hasPbStringValue;
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
