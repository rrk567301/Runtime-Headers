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

@property (nonatomic) char hasRequestorType;
@property (nonatomic) int requestorType;
@property (nonatomic) char hasMissType;
@property (nonatomic) int missType;
@property (nonatomic) char hasCount;
@property (nonatomic) unsigned int count;
@property (nonatomic) char hasBytes;
@property (nonatomic) unsigned int bytes;
@property (retain, nonatomic) NSMutableArray *errors;
@property (nonatomic) char hasHttpStatus;
@property (nonatomic) unsigned int httpStatus;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)errorsType;
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
- (int)StringAsRequestorType:(id)a0;
- (int)StringAsMissType:(id)a0;
- (void)addErrors:(id)a0;
- (void)clearErrors;
- (void)clearUnknownFields:(char)a0;
- (id)errorsAtIndex:(unsigned long long)a0;
- (unsigned long long)errorsCount;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)missTypeAsString:(int)a0;
- (void)readAll:(char)a0;
- (id)requestorTypeAsString:(int)a0;

@end
