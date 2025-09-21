@class NSString, NSMutableArray, PBDataReader;

@interface GEOPBOfflineRequestMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_downloadedRegions;
    NSString *_requestIdentifier;
    unsigned long long _requestStartTimeMs;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _messageType;
    char _debugLog;
    char _performanceMetrics;
    struct { unsigned char has_requestStartTimeMs : 1; unsigned char has_messageType : 1; unsigned char has_debugLog : 1; unsigned char has_performanceMetrics : 1; unsigned char read_downloadedRegions : 1; unsigned char read_requestIdentifier : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasMessageType;
@property (nonatomic) int messageType;
@property (nonatomic) char hasRequestStartTimeMs;
@property (nonatomic) unsigned long long requestStartTimeMs;
@property (nonatomic) char hasDebugLog;
@property (nonatomic) char debugLog;
@property (readonly, nonatomic) char hasRequestIdentifier;
@property (retain, nonatomic) NSString *requestIdentifier;
@property (nonatomic) char hasPerformanceMetrics;
@property (nonatomic) char performanceMetrics;
@property (retain, nonatomic) NSMutableArray *downloadedRegions;

+ (Class)downloadedRegionsType;
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
- (int)StringAsMessageType:(id)a0;
- (void)addDownloadedRegions:(id)a0;
- (void)clearDownloadedRegions;
- (id)downloadedRegionsAtIndex:(unsigned long long)a0;
- (unsigned long long)downloadedRegionsCount;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)messageTypeAsString:(int)a0;
- (void)readAll:(char)a0;

@end
