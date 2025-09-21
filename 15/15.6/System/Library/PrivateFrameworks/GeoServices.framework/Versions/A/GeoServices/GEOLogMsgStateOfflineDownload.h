@class NSString, PBUnknownFields;

@interface GEOLogMsgStateOfflineDownload : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_downloadCountry;
    int _downloadSize;
    int _entryTarget;
    unsigned int _zoomLevel;
    char _automaticUpdates;
    char _downloadOnWifiOnly;
    char _isDownloadInHomeMetro;
    char _optimizeStorage;
    char _regionTilesWereResized;
    struct { unsigned char has_downloadSize : 1; unsigned char has_entryTarget : 1; unsigned char has_zoomLevel : 1; unsigned char has_automaticUpdates : 1; unsigned char has_downloadOnWifiOnly : 1; unsigned char has_isDownloadInHomeMetro : 1; unsigned char has_optimizeStorage : 1; unsigned char has_regionTilesWereResized : 1; } _flags;
}

@property (readonly, nonatomic) char hasDownloadCountry;
@property (retain, nonatomic) NSString *downloadCountry;
@property (nonatomic) char hasIsDownloadInHomeMetro;
@property (nonatomic) char isDownloadInHomeMetro;
@property (nonatomic) char hasRegionTilesWereResized;
@property (nonatomic) char regionTilesWereResized;
@property (nonatomic) char hasEntryTarget;
@property (nonatomic) int entryTarget;
@property (nonatomic) char hasDownloadSize;
@property (nonatomic) int downloadSize;
@property (nonatomic) char hasZoomLevel;
@property (nonatomic) unsigned int zoomLevel;
@property (nonatomic) char hasDownloadOnWifiOnly;
@property (nonatomic) char downloadOnWifiOnly;
@property (nonatomic) char hasOptimizeStorage;
@property (nonatomic) char optimizeStorage;
@property (nonatomic) char hasAutomaticUpdates;
@property (nonatomic) char automaticUpdates;
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
- (int)StringAsDownloadSize:(id)a0;
- (int)StringAsEntryTarget:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)downloadSizeAsString:(int)a0;
- (id)entryTargetAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
