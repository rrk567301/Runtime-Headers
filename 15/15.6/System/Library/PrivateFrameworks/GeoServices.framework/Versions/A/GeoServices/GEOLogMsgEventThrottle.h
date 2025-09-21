@class NSString, PBDataReader, PBUnknownFields;

@interface GEOLogMsgEventThrottle : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_manifestEnv;
    NSString *_requestAppIdentifier;
    double _throttleDuration;
    NSString *_throttleReqType;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _networkService;
    unsigned int _throttleCount;
    int _throttleMode;
    unsigned int _throttleTriggerCount;
    unsigned int _throttleTriggerDuration;
    int _throttleType;
    unsigned int _tilesetId;
    struct { unsigned char has_throttleDuration : 1; unsigned char has_networkService : 1; unsigned char has_throttleCount : 1; unsigned char has_throttleMode : 1; unsigned char has_throttleTriggerCount : 1; unsigned char has_throttleTriggerDuration : 1; unsigned char has_throttleType : 1; unsigned char has_tilesetId : 1; unsigned char read_unknownFields : 1; unsigned char read_manifestEnv : 1; unsigned char read_requestAppIdentifier : 1; unsigned char read_throttleReqType : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasNetworkService;
@property (nonatomic) int networkService;
@property (readonly, nonatomic) char hasRequestAppIdentifier;
@property (retain, nonatomic) NSString *requestAppIdentifier;
@property (readonly, nonatomic) char hasManifestEnv;
@property (retain, nonatomic) NSString *manifestEnv;
@property (nonatomic) char hasTilesetId;
@property (nonatomic) unsigned int tilesetId;
@property (nonatomic) char hasThrottleType;
@property (nonatomic) int throttleType;
@property (nonatomic) char hasThrottleMode;
@property (nonatomic) int throttleMode;
@property (readonly, nonatomic) char hasThrottleReqType;
@property (retain, nonatomic) NSString *throttleReqType;
@property (nonatomic) char hasThrottleTriggerCount;
@property (nonatomic) unsigned int throttleTriggerCount;
@property (nonatomic) char hasThrottleTriggerDuration;
@property (nonatomic) unsigned int throttleTriggerDuration;
@property (nonatomic) char hasThrottleCount;
@property (nonatomic) unsigned int throttleCount;
@property (nonatomic) char hasThrottleDuration;
@property (nonatomic) double throttleDuration;
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
- (int)StringAsNetworkService:(id)a0;
- (int)StringAsThrottleMode:(id)a0;
- (int)StringAsThrottleType:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)networkServiceAsString:(int)a0;
- (void)readAll:(char)a0;
- (id)throttleModeAsString:(int)a0;
- (id)throttleTypeAsString:(int)a0;

@end
