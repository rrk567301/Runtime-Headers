@class GEOLocalTime, PBUnknownFields;

@interface GEOLogMsgStateUserSession : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _deviceLocalSessionId;
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _initialDeviceSessionId;
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _navSessionId;
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _preSyncSessionId;
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _sessionId;
    double _ageOfSessionIdInSeconds;
    GEOLocalTime *_eventTime;
    double _lastIcloudSyncDate;
    double _navSessionRelativeTimestamp;
    double _relativeTimestamp;
    unsigned long long _sessionEpoch;
    unsigned int _sequenceNumber;
    unsigned int _userCohortValue;
    char _didPreviouslyRotate;
    char _hasRotated;
    struct { unsigned char has_deviceLocalSessionId : 1; unsigned char has_initialDeviceSessionId : 1; unsigned char has_navSessionId : 1; unsigned char has_preSyncSessionId : 1; unsigned char has_sessionId : 1; unsigned char has_ageOfSessionIdInSeconds : 1; unsigned char has_lastIcloudSyncDate : 1; unsigned char has_navSessionRelativeTimestamp : 1; unsigned char has_relativeTimestamp : 1; unsigned char has_sessionEpoch : 1; unsigned char has_sequenceNumber : 1; unsigned char has_userCohortValue : 1; unsigned char has_didPreviouslyRotate : 1; unsigned char has_hasRotated : 1; } _flags;
}

@property (nonatomic) char hasSessionId;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } sessionId;
@property (nonatomic) char hasSequenceNumber;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) char hasRelativeTimestamp;
@property (nonatomic) double relativeTimestamp;
@property (nonatomic) char hasNavSessionId;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } navSessionId;
@property (nonatomic) char hasNavSessionRelativeTimestamp;
@property (nonatomic) double navSessionRelativeTimestamp;
@property (readonly, nonatomic) char hasEventTime;
@property (retain, nonatomic) GEOLocalTime *eventTime;
@property (nonatomic) char hasSessionEpoch;
@property (nonatomic) unsigned long long sessionEpoch;
@property (nonatomic) char hasAgeOfSessionIdInSeconds;
@property (nonatomic) double ageOfSessionIdInSeconds;
@property (nonatomic) char hasPreSyncSessionId;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } preSyncSessionId;
@property (nonatomic) char hasInitialDeviceSessionId;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } initialDeviceSessionId;
@property (nonatomic) char hasLastIcloudSyncDate;
@property (nonatomic) double lastIcloudSyncDate;
@property (nonatomic) char hasDidPreviouslyRotate;
@property (nonatomic) char didPreviouslyRotate;
@property (nonatomic) char hasDeviceLocalSessionId;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } deviceLocalSessionId;
@property (nonatomic) char hasUserCohortValue;
@property (nonatomic) unsigned int userCohortValue;
@property (nonatomic) char hasHasRotated;
@property (nonatomic) char hasRotated;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
