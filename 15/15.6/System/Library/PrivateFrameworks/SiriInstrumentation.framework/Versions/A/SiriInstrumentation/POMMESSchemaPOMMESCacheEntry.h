@class NSString, NSData;

@interface POMMESSchemaPOMMESCacheEntry : SISchemaInstrumentationMessage {
    struct { unsigned char sizeInBytes : 1; unsigned char timeToLiveInSeconds : 1; unsigned char origin : 1; } _has;
}

@property (copy, nonatomic) NSString *pegasusDomain;
@property (nonatomic) char hasPegasusDomain;
@property (nonatomic) unsigned int sizeInBytes;
@property (nonatomic) char hasSizeInBytes;
@property (nonatomic) unsigned int timeToLiveInSeconds;
@property (nonatomic) char hasTimeToLiveInSeconds;
@property (nonatomic) int origin;
@property (nonatomic) char hasOrigin;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteOrigin;
- (void)deletePegasusDomain;
- (void)deleteSizeInBytes;
- (void)deleteTimeToLiveInSeconds;
- (id)suppressMessageUnderConditions;

@end
