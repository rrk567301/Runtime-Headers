@class NSString, NSMutableArray, PBDataReader;

@interface GEOLPRVehicleType : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_key;
    NSMutableArray *_subtitles;
    NSMutableArray *_titles;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_key : 1; unsigned char read_subtitles : 1; unsigned char read_titles : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSMutableArray *titles;
@property (retain, nonatomic) NSMutableArray *subtitles;

+ (BOOL)isValid:(id)a0;
+ (Class)titleType;
+ (Class)subtitleType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)clearTitles;
- (void)addTitle:(id)a0;
- (unsigned long long)titlesCount;
- (id)titleAtIndex:(unsigned long long)a0;
- (void)clearSubtitles;
- (void)addSubtitle:(id)a0;
- (unsigned long long)subtitlesCount;
- (id)subtitleAtIndex:(unsigned long long)a0;

@end
