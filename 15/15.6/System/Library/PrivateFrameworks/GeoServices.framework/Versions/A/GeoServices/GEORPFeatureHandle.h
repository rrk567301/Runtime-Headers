@interface GEORPFeatureHandle : PBCodable <NSCopying> {
    struct GEORPFeatureHandleStyleAttribute { int x0; int x1; } *_styleAttributes;
    unsigned long long _styleAttributesCount;
    unsigned long long _styleAttributesSpace;
    unsigned int _featureIndex;
    unsigned int _featureTileX;
    unsigned int _featureTileY;
    unsigned int _featureTileZ;
    unsigned int _identifier;
    int _style;
    int _type;
    struct { unsigned char has_featureIndex : 1; unsigned char has_featureTileX : 1; unsigned char has_featureTileY : 1; unsigned char has_featureTileZ : 1; unsigned char has_identifier : 1; unsigned char has_style : 1; unsigned char has_type : 1; } _flags;
}

@property (nonatomic) char hasFeatureIndex;
@property (nonatomic) unsigned int featureIndex;
@property (nonatomic) char hasFeatureTileX;
@property (nonatomic) unsigned int featureTileX;
@property (nonatomic) char hasFeatureTileY;
@property (nonatomic) unsigned int featureTileY;
@property (nonatomic) char hasFeatureTileZ;
@property (nonatomic) unsigned int featureTileZ;
@property (nonatomic) char hasStyle;
@property (nonatomic) int style;
@property (nonatomic) char hasIdentifier;
@property (nonatomic) unsigned int identifier;
@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) unsigned long long styleAttributesCount;
@property (readonly, nonatomic) struct GEORPFeatureHandleStyleAttribute { int x0; int x1; } *styleAttributes;

+ (char)isValid:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (int)StringAsStyle:(id)a0;
- (void)addStyleAttribute:(struct GEORPFeatureHandleStyleAttribute { int x0; int x1; })a0;
- (void)clearStyleAttributes;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (void)setStyleAttributes:(struct GEORPFeatureHandleStyleAttribute { int x0; int x1; } *)a0 count:(unsigned long long)a1;
- (id)styleAsString:(int)a0;
- (struct GEORPFeatureHandleStyleAttribute { int x0; int x1; })styleAttributeAtIndex:(unsigned long long)a0;

@end
