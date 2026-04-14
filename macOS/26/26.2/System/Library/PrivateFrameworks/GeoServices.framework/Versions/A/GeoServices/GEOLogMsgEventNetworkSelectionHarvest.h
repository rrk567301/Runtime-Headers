@class NSData, PBUnknownFields;

@interface GEOLogMsgEventNetworkSelectionHarvest : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSData *_harvestData;
}

@property (readonly, nonatomic) BOOL hasHarvestData;
@property (retain, nonatomic) NSData *harvestData;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)readAll:(BOOL)a0;

@end
