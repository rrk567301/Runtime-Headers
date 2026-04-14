@class NSMutableArray, PBUnknownFields;

@interface GEORoadComplexity : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_attributes;
    unsigned int _offset;
    unsigned int _zilchPathIndex;
    struct { unsigned char has_offset : 1; unsigned char has_zilchPathIndex : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *attributes;
@property (nonatomic) BOOL hasOffset;
@property (nonatomic) unsigned int offset;
@property (nonatomic) BOOL hasZilchPathIndex;
@property (nonatomic) unsigned int zilchPathIndex;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)attributeType;

- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)attributesCount;
- (void)clearAttributes;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (void)addAttribute:(id)a0;
- (id)attributeAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
