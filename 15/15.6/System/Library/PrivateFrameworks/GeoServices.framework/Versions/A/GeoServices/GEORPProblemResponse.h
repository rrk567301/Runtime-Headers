@class NSString;

@interface GEORPProblemResponse : PBCodable <NSCopying> {
    NSString *_problemId;
    int _statusCode;
    char _isNotificationSupported;
    struct { unsigned char has_statusCode : 1; unsigned char has_isNotificationSupported : 1; } _flags;
}

@property (nonatomic) char hasStatusCode;
@property (nonatomic) int statusCode;
@property (readonly, nonatomic) char hasProblemId;
@property (retain, nonatomic) NSString *problemId;
@property (nonatomic) char hasIsNotificationSupported;
@property (nonatomic) char isNotificationSupported;

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
- (int)StringAsStatusCode:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)statusCodeAsString:(int)a0;

@end
