@class PBDataReader, NSString, NSData, GEOMapRegion, NSMutableArray, PBUnknownFields;

@interface GEOPlaceSearchResponse : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOMapRegion *_mapRegion;
    NSMutableArray *_namedFeatures;
    NSString *_nearbySectionHeader;
    NSMutableArray *_placeResults;
    NSMutableArray *_suggestionEntryLists;
    NSData *_suggestionMetadata;
    double _turnaroundTime;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _statusCodeInfo;
    int _status;
    char _isChainResultSet;
    struct { unsigned char has_turnaroundTime : 1; unsigned char has_statusCodeInfo : 1; unsigned char has_isChainResultSet : 1; unsigned char read_unknownFields : 1; unsigned char read_mapRegion : 1; unsigned char read_namedFeatures : 1; unsigned char read_nearbySectionHeader : 1; unsigned char read_placeResults : 1; unsigned char read_suggestionEntryLists : 1; unsigned char read_suggestionMetadata : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) int status;
@property (retain, nonatomic) NSMutableArray *placeResults;
@property (readonly, nonatomic) char hasMapRegion;
@property (retain, nonatomic) GEOMapRegion *mapRegion;
@property (retain, nonatomic) NSMutableArray *suggestionEntryLists;
@property (readonly, nonatomic) char hasSuggestionMetadata;
@property (retain, nonatomic) NSData *suggestionMetadata;
@property (retain, nonatomic) NSMutableArray *namedFeatures;
@property (nonatomic) char hasStatusCodeInfo;
@property (nonatomic) int statusCodeInfo;
@property (nonatomic) char hasTurnaroundTime;
@property (nonatomic) double turnaroundTime;
@property (readonly, nonatomic) char hasNearbySectionHeader;
@property (retain, nonatomic) NSString *nearbySectionHeader;
@property (nonatomic) char hasIsChainResultSet;
@property (nonatomic) char isChainResultSet;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)placeResultType;
+ (char)isValid:(id)a0;
+ (Class)namedFeaturesType;
+ (Class)suggestionEntryListsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;
- (int)StringAsStatusCodeInfo:(id)a0;
- (void)addPlaceResult:(id)a0;
- (void)addNamedFeatures:(id)a0;
- (void)addSuggestionEntryLists:(id)a0;
- (void)clearNamedFeatures;
- (void)clearPlaceResults;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (void)clearSuggestionEntryLists;
- (void)clearUnknownFields:(char)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)namedFeaturesAtIndex:(unsigned long long)a0;
- (unsigned long long)namedFeaturesCount;
- (id)placeResultAtIndex:(unsigned long long)a0;
- (unsigned long long)placeResultsCount;
- (void)readAll:(char)a0;
- (id)statusCodeInfoAsString:(int)a0;
- (id)suggestionEntryListsAtIndex:(unsigned long long)a0;
- (unsigned long long)suggestionEntryListsCount;

@end
