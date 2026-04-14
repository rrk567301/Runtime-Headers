@class PBUnknownFields;

@interface GEOAdvisoryClientCapabilities : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    BOOL _downloadOfflineMapActionSupported;
    BOOL _multipleCardsPerNoticeSupported;
    struct { unsigned char has_downloadOfflineMapActionSupported : 1; unsigned char has_multipleCardsPerNoticeSupported : 1; } _flags;
}

@property (nonatomic) BOOL hasMultipleCardsPerNoticeSupported;
@property (nonatomic) BOOL multipleCardsPerNoticeSupported;
@property (nonatomic) BOOL hasDownloadOfflineMapActionSupported;
@property (nonatomic) BOOL downloadOfflineMapActionSupported;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;

@end
