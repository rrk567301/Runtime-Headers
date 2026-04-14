@class NSString, NSMutableArray, PBDataReader;

@interface GEORPScorecard : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_categoryRatings;
    NSString *_version;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _recommended;
    struct { unsigned char has_recommended : 1; unsigned char read_categoryRatings : 1; unsigned char read_version : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *version;
@property (nonatomic) BOOL hasRecommended;
@property (nonatomic) BOOL recommended;
@property (retain, nonatomic) NSMutableArray *categoryRatings;

+ (BOOL)isValid:(id)a0;
+ (Class)categoryRatingsType;

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
- (void)clearCategoryRatings;
- (void)addCategoryRatings:(id)a0;
- (unsigned long long)categoryRatingsCount;
- (id)categoryRatingsAtIndex:(unsigned long long)a0;

@end
