@class NSMutableArray, PBUnknownFields;

@interface GEOMuninVersion : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_coverages;
    unsigned int _version;
    struct { unsigned char has_version : 1; } _flags;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSMutableArray *coverages;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)coverageType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
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
- (void)clearUnknownFields:(BOOL)a0;
- (void)clearCoverages;
- (void)addCoverage:(id)a0;
- (unsigned long long)coveragesCount;
- (id)coverageAtIndex:(unsigned long long)a0;

@end
