@class NSData;

@interface POMMESSchemaPOMMESCacheInvalidationEnded : SISchemaInstrumentationMessage {
    struct { unsigned char numberOfCacheKeysInvalidated : 1; } _has;
}

@property (nonatomic) unsigned int numberOfCacheKeysInvalidated;
@property (nonatomic) char hasNumberOfCacheKeysInvalidated;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteNumberOfCacheKeysInvalidated;
- (id)suppressMessageUnderConditions;

@end
