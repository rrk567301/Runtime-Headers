@class NSMutableArray, PBUnknownFields;

@interface GEOStyleAttributes : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_attributes;
    unsigned long long _customIconId;
    struct { unsigned char has_customIconId : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *attributes;
@property (nonatomic) char hasCustomIconId;
@property (nonatomic) unsigned long long customIconId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)attributeType;
+ (id)attributesForTransitLine:(id)a0;
+ (id)attributesForTransitSystem:(id)a0;
+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (void)addAttribute:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)attributesCount;
- (void)clearAttributes;
- (id)attributeAtIndex:(unsigned long long)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithGEOFeatureStyleAttributes:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
