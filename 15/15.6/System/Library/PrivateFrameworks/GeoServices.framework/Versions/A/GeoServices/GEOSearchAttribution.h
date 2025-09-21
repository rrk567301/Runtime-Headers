@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOSearchAttribution : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_attributionURLs;
    NSString *_sourceIdentifier;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _sourceVersion;
    struct { unsigned char read_unknownFields : 1; unsigned char read_attributionURLs : 1; unsigned char read_sourceIdentifier : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSString *sourceIdentifier;
@property (nonatomic) unsigned int sourceVersion;
@property (retain, nonatomic) NSMutableArray *attributionURLs;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)attributionURLsType;
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
- (void)addAttributionURLs:(id)a0;
- (id)attributionURLsAtIndex:(unsigned long long)a0;
- (unsigned long long)attributionURLsCount;
- (void)clearAttributionURLs;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
