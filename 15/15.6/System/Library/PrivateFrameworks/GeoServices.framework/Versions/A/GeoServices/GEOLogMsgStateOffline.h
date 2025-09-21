@class PBUnknownFields;

@interface GEOLogMsgStateOffline : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned long long _routingOdsVersion;
    unsigned long long _searchOdsVersion;
    unsigned int _numberOfDownloadedRegions;
    char _isMapsInOfflineMode;
    char _isNetworkConnected;
    char _isOnlyUseOffline;
    struct { unsigned char has_routingOdsVersion : 1; unsigned char has_searchOdsVersion : 1; unsigned char has_numberOfDownloadedRegions : 1; unsigned char has_isMapsInOfflineMode : 1; unsigned char has_isNetworkConnected : 1; unsigned char has_isOnlyUseOffline : 1; } _flags;
}

@property (nonatomic) char hasIsMapsInOfflineMode;
@property (nonatomic) char isMapsInOfflineMode;
@property (nonatomic) char hasIsNetworkConnected;
@property (nonatomic) char isNetworkConnected;
@property (nonatomic) char hasIsOnlyUseOffline;
@property (nonatomic) char isOnlyUseOffline;
@property (nonatomic) char hasNumberOfDownloadedRegions;
@property (nonatomic) unsigned int numberOfDownloadedRegions;
@property (nonatomic) char hasSearchOdsVersion;
@property (nonatomic) unsigned long long searchOdsVersion;
@property (nonatomic) char hasRoutingOdsVersion;
@property (nonatomic) unsigned long long routingOdsVersion;
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
