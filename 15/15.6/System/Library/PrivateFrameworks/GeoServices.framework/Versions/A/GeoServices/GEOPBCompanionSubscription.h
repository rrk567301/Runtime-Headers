@class PBDataReader, NSString, GEOMapRegion, PBUnknownFields;

@interface GEOPBCompanionSubscription : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    unsigned long long _dataType;
    NSString *_displayName;
    unsigned long long _downloadedDataBytes;
    NSString *_identifier;
    NSString *_originatingBundleIdentifier;
    GEOMapRegion *_region;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _policy;
    char _syncToWatch;
    struct { unsigned char has_dataType : 1; unsigned char has_downloadedDataBytes : 1; unsigned char has_policy : 1; unsigned char has_syncToWatch : 1; unsigned char read_unknownFields : 1; unsigned char read_displayName : 1; unsigned char read_identifier : 1; unsigned char read_originatingBundleIdentifier : 1; unsigned char read_region : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char hasRegion;
@property (retain, nonatomic) GEOMapRegion *region;
@property (nonatomic) char hasDataType;
@property (nonatomic) unsigned long long dataType;
@property (nonatomic) char hasPolicy;
@property (nonatomic) unsigned int policy;
@property (readonly, nonatomic) char hasOriginatingBundleIdentifier;
@property (retain, nonatomic) NSString *originatingBundleIdentifier;
@property (readonly, nonatomic) char hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) char hasSyncToWatch;
@property (nonatomic) char syncToWatch;
@property (nonatomic) char hasDownloadedDataBytes;
@property (nonatomic) unsigned long long downloadedDataBytes;
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
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
