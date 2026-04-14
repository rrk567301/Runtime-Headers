@class PBUnknownFields;

@interface GEORPCuratedCollectionCorrections : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _correctionType;
    struct { unsigned char has_correctionType : 1; } _flags;
}

@property (nonatomic) BOOL hasCorrectionType;
@property (nonatomic) int correctionType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)correctionTypeAsString:(int)a0;
- (int)StringAsCorrectionType:(id)a0;

@end
