@class NSMutableArray;

@interface GEOSpatialLookupBatchResponse : PBCodable <NSCopying> {
    NSMutableArray *_responses;
    int _statusCode;
    struct { unsigned char has_statusCode : 1; } _flags;
}

@property (nonatomic) char hasStatusCode;
@property (nonatomic) int statusCode;
@property (retain, nonatomic) NSMutableArray *responses;

+ (char)isValid:(id)a0;
+ (Class)responseType;

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
- (int)StringAsStatusCode:(id)a0;
- (void)addResponse:(id)a0;
- (void)clearResponses;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)responseAtIndex:(unsigned long long)a0;
- (unsigned long long)responsesCount;
- (id)statusCodeAsString:(int)a0;

@end
