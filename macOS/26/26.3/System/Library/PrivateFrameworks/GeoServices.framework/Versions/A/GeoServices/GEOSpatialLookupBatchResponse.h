@class NSMutableArray;

@interface GEOSpatialLookupBatchResponse : PBCodable <NSCopying> {
    NSMutableArray *_responses;
    int _statusCode;
    struct { unsigned char has_statusCode : 1; } _flags;
}

@property (nonatomic) BOOL hasStatusCode;
@property (nonatomic) int statusCode;
@property (retain, nonatomic) NSMutableArray *responses;

+ (BOOL)isValid:(id)a0;
+ (Class)responseType;

- (void)addResponse:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (int)StringAsStatusCode:(id)a0;
- (void)clearResponses;
- (id)responseAtIndex:(unsigned long long)a0;
- (unsigned long long)responsesCount;
- (id)statusCodeAsString:(int)a0;

@end
