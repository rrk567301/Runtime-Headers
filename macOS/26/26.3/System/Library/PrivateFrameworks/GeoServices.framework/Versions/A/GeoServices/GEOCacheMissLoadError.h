@class NSString, PBUnknownFields;

@interface GEOCacheMissLoadError : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_errorDomain;
    unsigned int _count;
    int _errorCode;
    struct { unsigned char has_count : 1; unsigned char has_errorCode : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasErrorDomain;
@property (retain, nonatomic) NSString *errorDomain;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) int errorCode;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) unsigned int count;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;

@end
