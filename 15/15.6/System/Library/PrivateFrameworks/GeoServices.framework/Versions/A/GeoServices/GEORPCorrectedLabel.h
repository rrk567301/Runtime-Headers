@class NSString, GEOLatLng, GEOMapRegion, NSMutableArray, PBDataReader;

@interface GEORPCorrectedLabel : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOLatLng *_coordinate;
    NSString *_correctedValue;
    NSMutableArray *_featureHandles;
    GEOMapRegion *_featureRegion;
    NSString *_originalValue;
    unsigned long long _uid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    char _localizedLabels;
    struct { unsigned char has_uid : 1; unsigned char has_localizedLabels : 1; unsigned char read_coordinate : 1; unsigned char read_correctedValue : 1; unsigned char read_featureHandles : 1; unsigned char read_featureRegion : 1; unsigned char read_originalValue : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasOriginalValue;
@property (retain, nonatomic) NSString *originalValue;
@property (readonly, nonatomic) char hasCorrectedValue;
@property (retain, nonatomic) NSString *correctedValue;
@property (readonly, nonatomic) char hasFeatureRegion;
@property (retain, nonatomic) GEOMapRegion *featureRegion;
@property (retain, nonatomic) NSMutableArray *featureHandles;
@property (readonly, nonatomic) char hasCoordinate;
@property (retain, nonatomic) GEOLatLng *coordinate;
@property (nonatomic) char hasUid;
@property (nonatomic) unsigned long long uid;
@property (nonatomic) char hasLocalizedLabels;
@property (nonatomic) char localizedLabels;

+ (Class)featureHandleType;
+ (char)isValid:(id)a0;

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
- (void)addFeatureHandle:(id)a0;
- (void)clearFeatureHandles;
- (id)featureHandleAtIndex:(unsigned long long)a0;
- (unsigned long long)featureHandlesCount;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
