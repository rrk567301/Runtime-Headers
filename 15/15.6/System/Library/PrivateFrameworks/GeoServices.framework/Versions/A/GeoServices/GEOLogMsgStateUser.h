@class NSString, PBDataReader, PBUnknownFields;

@interface GEOLogMsgStateUser : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _preSyncSessionId;
    double _bestMapsUseStartDate;
    NSString *_homeCountryCode;
    NSString *_homeMetroRegion;
    double _mapsUseLastDate;
    double _mapsUseStartDate;
    double _syncFirstTimestamp;
    double _syncLastTimestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    char _isSignedInWithDsid;
    char _isTourist;
    struct { unsigned char has_preSyncSessionId : 1; unsigned char has_bestMapsUseStartDate : 1; unsigned char has_mapsUseLastDate : 1; unsigned char has_mapsUseStartDate : 1; unsigned char has_syncFirstTimestamp : 1; unsigned char has_syncLastTimestamp : 1; unsigned char has_isSignedInWithDsid : 1; unsigned char has_isTourist : 1; unsigned char read_unknownFields : 1; unsigned char read_homeCountryCode : 1; unsigned char read_homeMetroRegion : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasSyncFirstTimestamp;
@property (nonatomic) double syncFirstTimestamp;
@property (nonatomic) char hasSyncLastTimestamp;
@property (nonatomic) double syncLastTimestamp;
@property (nonatomic) char hasMapsUseStartDate;
@property (nonatomic) double mapsUseStartDate;
@property (nonatomic) char hasMapsUseLastDate;
@property (nonatomic) double mapsUseLastDate;
@property (readonly, nonatomic) char hasHomeCountryCode;
@property (retain, nonatomic) NSString *homeCountryCode;
@property (readonly, nonatomic) char hasHomeMetroRegion;
@property (retain, nonatomic) NSString *homeMetroRegion;
@property (nonatomic) char hasIsTourist;
@property (nonatomic) char isTourist;
@property (nonatomic) char hasPreSyncSessionId;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } preSyncSessionId;
@property (nonatomic) char hasIsSignedInWithDsid;
@property (nonatomic) char isSignedInWithDsid;
@property (nonatomic) char hasBestMapsUseStartDate;
@property (nonatomic) double bestMapsUseStartDate;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
