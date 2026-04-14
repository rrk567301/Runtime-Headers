@class NSString, NSData, POMMESSchemaPOMMESCacheEntry;

@interface POMMESSchemaPOMMESCacheStoringStarted : SISchemaInstrumentationMessage {
    struct { unsigned char resultSizeInBytes : 1; unsigned char timeToLiveInSeconds : 1; } _has;
}

@property (retain, nonatomic) POMMESSchemaPOMMESCacheEntry *entry;
@property (nonatomic) BOOL hasEntry;
@property (copy, nonatomic) NSString *resultDomain;
@property (nonatomic) BOOL hasResultDomain;
@property (nonatomic) unsigned int resultSizeInBytes;
@property (nonatomic) BOOL hasResultSizeInBytes;
@property (nonatomic) unsigned int timeToLiveInSeconds;
@property (nonatomic) BOOL hasTimeToLiveInSeconds;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEntry;
- (void)deleteResultDomain;
- (void)deleteResultSizeInBytes;
- (void)deleteTimeToLiveInSeconds;

@end
