@class NSString, PBDataReader, GEOTransitPlaceCard;

@interface GEOPlaceActionDetails : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_actionUrl;
    unsigned long long _animationID;
    unsigned long long _businessID;
    NSString *_destinationApp;
    NSString *_photoId;
    long long _placeID;
    NSString *_richProviderId;
    double _searchResponseRelativeTimestamp;
    NSString *_showcaseId;
    unsigned long long _targetID;
    GEOTransitPlaceCard *_transitPlaceCard;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _localSearchProviderID;
    int _resultIndex;
    struct { unsigned char has_animationID : 1; unsigned char has_businessID : 1; unsigned char has_placeID : 1; unsigned char has_searchResponseRelativeTimestamp : 1; unsigned char has_targetID : 1; unsigned char has_localSearchProviderID : 1; unsigned char has_resultIndex : 1; unsigned char read_actionUrl : 1; unsigned char read_destinationApp : 1; unsigned char read_photoId : 1; unsigned char read_richProviderId : 1; unsigned char read_showcaseId : 1; unsigned char read_transitPlaceCard : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasBusinessID;
@property (nonatomic) unsigned long long businessID;
@property (nonatomic) char hasPlaceID;
@property (nonatomic) long long placeID;
@property (nonatomic) char hasLocalSearchProviderID;
@property (nonatomic) int localSearchProviderID;
@property (nonatomic) char hasSearchResponseRelativeTimestamp;
@property (nonatomic) double searchResponseRelativeTimestamp;
@property (nonatomic) char hasResultIndex;
@property (nonatomic) int resultIndex;
@property (nonatomic) char hasAnimationID;
@property (nonatomic) unsigned long long animationID;
@property (nonatomic) char hasTargetID;
@property (nonatomic) unsigned long long targetID;
@property (readonly, nonatomic) char hasPhotoId;
@property (retain, nonatomic) NSString *photoId;
@property (readonly, nonatomic) char hasActionUrl;
@property (retain, nonatomic) NSString *actionUrl;
@property (readonly, nonatomic) char hasTransitPlaceCard;
@property (retain, nonatomic) GEOTransitPlaceCard *transitPlaceCard;
@property (readonly, nonatomic) char hasRichProviderId;
@property (retain, nonatomic) NSString *richProviderId;
@property (readonly, nonatomic) char hasDestinationApp;
@property (retain, nonatomic) NSString *destinationApp;
@property (readonly, nonatomic) char hasShowcaseId;
@property (retain, nonatomic) NSString *showcaseId;

+ (id)actionDetailsWithChildPlace:(id)a0 timestamp:(double)a1 resultIndex:(int)a2;
+ (id)actionDetailsWithDetails:(id)a0 timestamp:(double)a1;
+ (id)actionDetailsWithMapItem:(id)a0 childPlace:(id)a1 timestamp:(double)a2 resultIndex:(int)a3 targetID:(unsigned long long)a4 transitCardCategory:(int)a5 transitSystem:(id)a6 transitDepartureSequence:(id)a7 transitIncident:(id)a8;
+ (id)actionDetailsWithMapItem:(id)a0 timestamp:(double)a1 resultIndex:(int)a2;
+ (id)actionDetailsWithMapItem:(id)a0 timestamp:(double)a1 resultIndex:(int)a2 targetID:(unsigned long long)a3;
+ (id)actionDetailsWithMapItem:(id)a0 timestamp:(double)a1 resultIndex:(int)a2 targetID:(unsigned long long)a3 transitCardCategory:(int)a4 transitSystem:(id)a5 transitDepartureSequence:(id)a6 transitIncident:(id)a7;
+ (id)actionDetailsWithTargetID:(unsigned long long)a0;
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
- (id)initWithJSON:(id)a0;
- (id)initWithMapItem:(id)a0 childPlace:(id)a1 relativeTimestamp:(double)a2 resultIndex:(int)a3 targetID:(unsigned long long)a4 transitCardCategory:(int)a5 transitSystem:(id)a6 transitDepartureSequence:(id)a7 transitIncident:(id)a8;
- (id)initWithMapItem:(id)a0 relativeTimestamp:(double)a1 resultIndex:(int)a2;
- (id)initWithMapItem:(id)a0 relativeTimestamp:(double)a1 resultIndex:(int)a2 targetID:(unsigned long long)a3;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
