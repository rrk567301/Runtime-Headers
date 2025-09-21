@class NSString, NSMutableArray, PBDataReader;

@interface GEOWiFiQualitySearchResultTile : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_ess;
    NSString *_etag;
    unsigned long long _tileKey;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_tileKey : 1; unsigned char read_ess : 1; unsigned char read_etag : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasTileKey;
@property (nonatomic) unsigned long long tileKey;
@property (readonly, nonatomic) char hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (retain, nonatomic) NSMutableArray *ess;

+ (Class)essType;
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
- (void)addEss:(id)a0;
- (void)clearEss;
- (id)essAtIndex:(unsigned long long)a0;
- (unsigned long long)essCount;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
