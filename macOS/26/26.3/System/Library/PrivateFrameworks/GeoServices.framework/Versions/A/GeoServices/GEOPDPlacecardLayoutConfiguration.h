@class NSMutableArray, PBUnknownFields;

@interface GEOPDPlacecardLayoutConfiguration : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_entries;
}

@property (retain, nonatomic) NSMutableArray *entries;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)entriesType;
+ (id)placecardLayoutConfigurationPlaceData:(id)a0;

- (void)addEntries:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (id)entriesAtIndex:(unsigned long long)a0;
- (void)clearEntries;
- (unsigned long long)entriesCount;

@end
