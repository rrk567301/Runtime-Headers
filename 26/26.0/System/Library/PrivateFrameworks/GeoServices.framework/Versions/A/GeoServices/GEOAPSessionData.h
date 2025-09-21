@class NSString;

@interface GEOAPSessionData : PBCodable <NSCopying> {
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _sessionId;
    double _createTimeInUse;
    double _createTime;
    double _mapsUserStartDate;
    NSString *_originHardwareClass;
    unsigned long long _salt;
    double _sessionCreateHour;
    unsigned long long _sessionEpoch;
    unsigned int _opaqueAppId;
    BOOL _hasRotated;
    BOOL _sessionHasRotated;
    struct { unsigned char has_sessionId : 1; unsigned char has_createTimeInUse : 1; unsigned char has_createTime : 1; unsigned char has_mapsUserStartDate : 1; unsigned char has_salt : 1; unsigned char has_sessionCreateHour : 1; unsigned char has_sessionEpoch : 1; unsigned char has_opaqueAppId : 1; unsigned char has_hasRotated : 1; unsigned char has_sessionHasRotated : 1; } _flags;
}

@property (nonatomic) BOOL hasSessionId;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } sessionId;
@property (nonatomic) BOOL hasCreateTime;
@property (nonatomic) double createTime;
@property (nonatomic) BOOL hasSessionEpoch;
@property (nonatomic) unsigned long long sessionEpoch;
@property (nonatomic) BOOL hasMapsUserStartDate;
@property (nonatomic) double mapsUserStartDate;
@property (nonatomic) BOOL hasOpaqueAppId;
@property (nonatomic) unsigned int opaqueAppId;
@property (readonly, nonatomic) BOOL hasOriginHardwareClass;
@property (retain, nonatomic) NSString *originHardwareClass;
@property (nonatomic) BOOL hasCreateTimeInUse;
@property (nonatomic) double createTimeInUse;
@property (nonatomic) BOOL hasSessionHasRotated;
@property (nonatomic) BOOL sessionHasRotated;
@property (nonatomic) BOOL hasHasRotated;
@property (nonatomic) BOOL hasRotated;
@property (nonatomic) BOOL hasSessionCreateHour;
@property (nonatomic) double sessionCreateHour;
@property (nonatomic) BOOL hasSalt;
@property (nonatomic) unsigned long long salt;

+ (BOOL)isValid:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
