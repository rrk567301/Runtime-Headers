@interface GEOAddressCorrectionUpdateResponse : PBCodable <NSCopying> {
    unsigned int _retryScheduleInDays;
    struct { unsigned char has_retryScheduleInDays : 1; } _flags;
}

@property (nonatomic) BOOL hasRetryScheduleInDays;
@property (nonatomic) unsigned int retryScheduleInDays;

+ (BOOL)isValid:(id)a0;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)description;
- (void)readAll:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
