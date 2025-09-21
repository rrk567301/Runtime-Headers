@class NSString, _INPBString;

@interface _INPBCompressFileIntentResponse : PBCodable <_INPBCompressFileIntentResponse, NSSecureCoding, NSCopying> {
    struct { unsigned char success : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBString *entityName;
@property (readonly, nonatomic) char hasEntityName;
@property (nonatomic) char success;
@property (nonatomic) char hasSuccess;
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
