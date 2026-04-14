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

+ (Class)attributeType;
+ (BOOL)isValid:(id)a0;
+ (id)attributesForTransitLine:(id)a0;
+ (id)attributesForTransitSystem:(id)a0;

- (void)readAll:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)attributeAtIndex:(unsigned long long)a0;
- (void)clearAttributes;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)addAttribute:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)description;
- (unsigned long long)attributesCount;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;
- (id)initWithGEOFeatureStyleAttributes:(id)a0;

@end
