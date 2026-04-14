@class NSString, PBUnknownFields;

@interface GEORPPoiEnrichmentQueryParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_scorecardVersion;
}

@property (readonly, nonatomic) BOOL hasScorecardVersion;
@property (retain, nonatomic) NSString *scorecardVersion;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)clearUnknownFields:(BOOL)a0;

@end
