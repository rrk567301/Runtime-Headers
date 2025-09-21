@class NSMutableArray, PBUnknownFields;

@interface GEOMuninVersion : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_coverages;
    unsigned int _version;
    struct { unsigned char has_version : 1; } _flags;
}

@property (nonatomic) char hasVersion;
@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSMutableArray *coverages;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)coverageType;
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
- (void)addCoverage:(id)a0;
- (void)clearCoverages;
- (void)clearUnknownFields:(char)a0;
- (id)coverageAtIndex:(unsigned long long)a0;
- (unsigned long long)coveragesCount;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
