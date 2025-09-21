@class NSString, _INPBIntentMetadata;

@interface _INPBGetVisualCodeIntent : PBCodable <_INPBGetVisualCodeIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char visualCodeType : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (nonatomic) int visualCodeType;
@property (nonatomic) char hasVisualCodeType;
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
- (int)StringAsVisualCodeType:(id)a0;
- (id)visualCodeTypeAsString:(int)a0;

@end
