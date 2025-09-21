@class NSString, NSData, POMMESSchemaPOMMESCacheEntry;

@interface POMMESSchemaPOMMESCacheStoringStarted : SISchemaInstrumentationMessage {
    struct { unsigned char resultSizeInBytes : 1; unsigned char timeToLiveInSeconds : 1; } _has;
}

@property (retain, nonatomic) POMMESSchemaPOMMESCacheEntry *entry;
@property (nonatomic) char hasEntry;
@property (copy, nonatomic) NSString *resultDomain;
@property (nonatomic) char hasResultDomain;
@property (nonatomic) unsigned int resultSizeInBytes;
@property (nonatomic) char hasResultSizeInBytes;
@property (nonatomic) unsigned int timeToLiveInSeconds;
@property (nonatomic) char hasTimeToLiveInSeconds;
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
- (void)deleteEntry;
- (void)deleteResultDomain;
- (void)deleteResultSizeInBytes;
- (void)deleteTimeToLiveInSeconds;
- (id)suppressMessageUnderConditions;

@end
