@class NSMutableArray, PBUnknownFields;

@interface GEOStyleAttributes : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_attributes;
    unsigned long long _customIconId;
    struct { unsigned char has_customIconId : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *attributes;
@property (nonatomic) BOOL hasCustomIconId;
@property (nonatomic) unsigned long long customIconId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)attributesForTransitLine:(id)a0;
+ (BOOL)isValid:(id)a0;
+ (Class)attributeType;
+ (id)attributesForTransitSystem:(id)a0;

- (id)initWithJSON:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)attributeAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)initWithGEOFeatureStyleAttributes:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)attributesCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearAttributes;
- (void)addAttribute:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)readAll:(BOOL)a0;

@end
