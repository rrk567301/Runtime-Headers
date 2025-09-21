@class GEOABSecondPartyPlaceRequestClientMetaData, NSString, PBUnknownFields, PBDataReader, NSMutableArray, GEOABClientConfig;

@interface GEOABAssignmentResponse : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_assignments;
    unsigned long long _branchExpirationTtlHours;
    GEOABClientConfig *_clientConfig;
    GEOABSecondPartyPlaceRequestClientMetaData *_mapsAbClientMetadata;
    GEOABSecondPartyPlaceRequestClientMetaData *_parsecClientMetadata;
    GEOABSecondPartyPlaceRequestClientMetaData *_rapClientMetadata;
    unsigned long long _refreshIntervalSeconds;
    NSString *_requestGuid;
    GEOABSecondPartyPlaceRequestClientMetaData *_siriClientMetadata;
    NSString *_sourceURL;
    double _timestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    char _invalidatePoiCache;
    char _invalidateTileCache;
    struct { unsigned char has_branchExpirationTtlHours : 1; unsigned char has_refreshIntervalSeconds : 1; unsigned char has_timestamp : 1; unsigned char has_invalidatePoiCache : 1; unsigned char has_invalidateTileCache : 1; unsigned char read_unknownFields : 1; unsigned char read_assignments : 1; unsigned char read_clientConfig : 1; unsigned char read_mapsAbClientMetadata : 1; unsigned char read_parsecClientMetadata : 1; unsigned char read_rapClientMetadata : 1; unsigned char read_requestGuid : 1; unsigned char read_siriClientMetadata : 1; unsigned char read_sourceURL : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) char hasSourceURL;
@property (retain, nonatomic) NSString *sourceURL;
@property (readonly, nonatomic) char hasRequestGuid;
@property (retain, nonatomic) NSString *requestGuid;
@property (retain, nonatomic) NSMutableArray *assignments;
@property (nonatomic) char hasInvalidateTileCache;
@property (nonatomic) char invalidateTileCache;
@property (nonatomic) char hasInvalidatePoiCache;
@property (nonatomic) char invalidatePoiCache;
@property (nonatomic) char hasRefreshIntervalSeconds;
@property (nonatomic) unsigned long long refreshIntervalSeconds;
@property (readonly, nonatomic) char hasClientConfig;
@property (retain, nonatomic) GEOABClientConfig *clientConfig;
@property (readonly, nonatomic) char hasParsecClientMetadata;
@property (retain, nonatomic) GEOABSecondPartyPlaceRequestClientMetaData *parsecClientMetadata;
@property (readonly, nonatomic) char hasSiriClientMetadata;
@property (retain, nonatomic) GEOABSecondPartyPlaceRequestClientMetaData *siriClientMetadata;
@property (readonly, nonatomic) char hasRapClientMetadata;
@property (retain, nonatomic) GEOABSecondPartyPlaceRequestClientMetaData *rapClientMetadata;
@property (readonly, nonatomic) char hasMapsAbClientMetadata;
@property (retain, nonatomic) GEOABSecondPartyPlaceRequestClientMetaData *mapsAbClientMetadata;
@property (nonatomic) char hasBranchExpirationTtlHours;
@property (nonatomic) unsigned long long branchExpirationTtlHours;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)assignmentType;
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
- (id)_clientConfigValueForKey:(id)a0;
- (void)addAssignment:(id)a0;
- (id)assignmentAtIndex:(unsigned long long)a0;
- (unsigned long long)assignmentsCount;
- (void)clearAssignments;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
