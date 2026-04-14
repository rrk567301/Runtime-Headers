@class NSData;

@interface POMMESSchemaPOMMESCacheInvalidationEnded : SISchemaInstrumentationMessage {
    struct { unsigned char numberOfCacheKeysInvalidated : 1; } _has;
}

@property (nonatomic) unsigned int numberOfCacheKeysInvalidated;
@property (nonatomic) BOOL hasNumberOfCacheKeysInvalidated;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteNumberOfCacheKeysInvalidated;

@end
