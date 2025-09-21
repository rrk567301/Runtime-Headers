@class NSString, NSData, POMMESSchemaPOMMESCacheEntry;

@interface POMMESSchemaPOMMESCacheLookupEnded : SISchemaInstrumentationMessage {
    struct { unsigned char status : 1; } _has;
}

@property (nonatomic) int status;
@property (nonatomic) char hasStatus;
@property (copy, nonatomic) NSString *resultDomain;
@property (nonatomic) char hasResultDomain;
@property (retain, nonatomic) POMMESSchemaPOMMESCacheEntry *result;
@property (nonatomic) char hasResult;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteResult;
- (void)deleteResultDomain;
- (void)deleteStatus;
- (id)suppressMessageUnderConditions;

@end
