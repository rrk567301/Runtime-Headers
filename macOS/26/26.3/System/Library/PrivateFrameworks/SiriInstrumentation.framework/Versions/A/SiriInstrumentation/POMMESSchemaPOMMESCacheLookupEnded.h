@class NSString, NSData, POMMESSchemaPOMMESCacheEntry;

@interface POMMESSchemaPOMMESCacheLookupEnded : SISchemaInstrumentationMessage {
    struct { unsigned char status : 1; } _has;
}

@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (copy, nonatomic) NSString *resultDomain;
@property (nonatomic) BOOL hasResultDomain;
@property (retain, nonatomic) POMMESSchemaPOMMESCacheEntry *result;
@property (nonatomic) BOOL hasResult;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteResult;
- (void)deleteResultDomain;
- (void)deleteStatus;

@end
