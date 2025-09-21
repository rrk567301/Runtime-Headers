@class NSString, _INPBFilePropertyValue;

@interface _INPBFileProperty : PBCodable <_INPBFileProperty, NSSecureCoding, NSCopying> {
    struct { unsigned char name : 1; unsigned char qualifier : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int name;
@property (nonatomic) char hasName;
@property (nonatomic) int qualifier;
@property (nonatomic) char hasQualifier;
@property (retain, nonatomic) _INPBFilePropertyValue *value;
@property (readonly, nonatomic) char hasValue;
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
- (int)StringAsName:(id)a0;
- (id)nameAsString:(int)a0;
- (int)StringAsQualifier:(id)a0;
- (id)qualifierAsString:(int)a0;

@end
