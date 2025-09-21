@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBSetMessageAttributeIntent : PBCodable <_INPBSetMessageAttributeIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char attribute : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int attribute;
@property (nonatomic) char hasAttribute;
@property (copy, nonatomic) NSArray *identifiers;
@property (readonly, nonatomic) unsigned long long identifiersCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
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
- (void)addIdentifier:(id)a0;
- (void)clearIdentifiers;
- (id)identifierAtIndex:(unsigned long long)a0;
- (int)StringAsAttribute:(id)a0;
- (id)attributeAsString:(int)a0;

@end
