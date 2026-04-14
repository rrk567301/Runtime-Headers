@class NSMutableArray, PBUnknownFields;

@interface GEOCacheMiss : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_errors;
    unsigned int _bytes;
    unsigned int _count;
    unsigned int _httpStatus;
    int _missType;
    int _requestorType;
    struct { unsigned char has_bytes : 1; unsigned char has_count : 1; unsigned char has_httpStatus : 1; unsigned char has_missType : 1; unsigned char has_requestorType : 1; } _flags;
}

@property (nonatomic) BOOL hasRequestorType;
@property (nonatomic) int requestorType;
@property (nonatomic) BOOL hasMissType;
@property (nonatomic) int missType;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) unsigned int count;
@property (nonatomic) BOOL hasBytes;
@property (nonatomic) unsigned int bytes;
@property (retain, nonatomic) NSMutableArray *errors;
@property (nonatomic) BOOL hasHttpStatus;
@property (nonatomic) unsigned int httpStatus;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)errorsType;

- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (void)clearErrors;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsMissType:(id)a0;
- (int)StringAsRequestorType:(id)a0;
- (void)addErrors:(id)a0;
- (id)errorsAtIndex:(unsigned long long)a0;
- (unsigned long long)errorsCount;
- (id)missTypeAsString:(int)a0;
- (id)requestorTypeAsString:(int)a0;

@end
