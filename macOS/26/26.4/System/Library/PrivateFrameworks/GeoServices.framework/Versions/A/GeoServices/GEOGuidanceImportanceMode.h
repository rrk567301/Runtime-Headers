@class PBUnknownFields;

@interface GEOGuidanceImportanceMode : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _guidancePreferenceTypes;
}

@property (readonly, nonatomic) unsigned long long guidancePreferenceTypesCount;
@property (readonly, nonatomic) int *guidancePreferenceTypes;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (void)dealloc;
- (id)initWithJSON:(id)a0;
- (int)StringAsGuidancePreferenceTypes:(id)a0;
- (void)addGuidancePreferenceType:(int)a0;
- (void)clearGuidancePreferenceTypes;
- (int)guidancePreferenceTypeAtIndex:(unsigned long long)a0;
- (id)guidancePreferenceTypesAsString:(int)a0;
- (void)setGuidancePreferenceTypes:(int *)a0 count:(unsigned long long)a1;

@end
