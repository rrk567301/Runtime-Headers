@class NSString, PBDataReader;

@interface GEOTransitIncidentItem : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_transitIncidentTitle;
    NSString *_transitLineMuid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_transitIncidentTitle : 1; unsigned char read_transitLineMuid : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasTransitIncidentTitle;
@property (retain, nonatomic) NSString *transitIncidentTitle;
@property (readonly, nonatomic) BOOL hasTransitLineMuid;
@property (retain, nonatomic) NSString *transitLineMuid;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithData:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)init;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;

@end
