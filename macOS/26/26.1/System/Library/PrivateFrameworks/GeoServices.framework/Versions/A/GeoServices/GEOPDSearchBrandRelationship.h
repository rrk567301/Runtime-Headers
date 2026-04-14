@class NSString;

@interface GEOPDSearchBrandRelationship : PBCodable <NSCopying> {
    unsigned long long _expandedParentMuid;
    unsigned long long _muid;
    unsigned long long _parentMuid;
    NSString *_relationshipType;
    struct { unsigned char has_expandedParentMuid : 1; unsigned char has_muid : 1; unsigned char has_parentMuid : 1; } _flags;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)jsonRepresentation;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
