@class NSString;

@interface GEOAPSessionData : PBCodable <NSCopying> {
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _sessionId;
    double _createTimeInUse;
    double _createTime;
    double _mapsUserStartDate;
    NSString *_originHardwareClass;
    unsigned long long _sessionEpoch;
    unsigned int _opaqueAppId;
    char _hasRotated;
    char _sessionHasRotated;
    struct { unsigned char has_sessionId : 1; unsigned char has_createTimeInUse : 1; unsigned char has_createTime : 1; unsigned char has_mapsUserStartDate : 1; unsigned char has_sessionEpoch : 1; unsigned char has_opaqueAppId : 1; unsigned char has_hasRotated : 1; unsigned char has_sessionHasRotated : 1; } _flags;
}

@property (nonatomic) char hasSessionId;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } sessionId;
@property (nonatomic) char hasCreateTime;
@property (nonatomic) double createTime;
@property (nonatomic) char hasSessionEpoch;
@property (nonatomic) unsigned long long sessionEpoch;
@property (nonatomic) char hasMapsUserStartDate;
@property (nonatomic) double mapsUserStartDate;
@property (nonatomic) char hasOpaqueAppId;
@property (nonatomic) unsigned int opaqueAppId;
@property (readonly, nonatomic) char hasOriginHardwareClass;
@property (retain, nonatomic) NSString *originHardwareClass;
@property (nonatomic) char hasCreateTimeInUse;
@property (nonatomic) double createTimeInUse;
@property (nonatomic) char hasSessionHasRotated;
@property (nonatomic) char sessionHasRotated;
@property (nonatomic) char hasHasRotated;
@property (nonatomic) char hasRotated;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
