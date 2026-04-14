@class NSString, NSData;

@interface POMMESSchemaPOMMESCacheEntry : SISchemaInstrumentationMessage {
    struct { unsigned char sizeInBytes : 1; unsigned char timeToLiveInSeconds : 1; unsigned char origin : 1; } _has;
}

@property (copy, nonatomic) NSString *pegasusDomain;
@property (nonatomic) BOOL hasPegasusDomain;
@property (nonatomic) unsigned int sizeInBytes;
@property (nonatomic) BOOL hasSizeInBytes;
@property (nonatomic) unsigned int timeToLiveInSeconds;
@property (nonatomic) BOOL hasTimeToLiveInSeconds;
@property (nonatomic) int origin;
@property (nonatomic) BOOL hasOrigin;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteOrigin;
- (void)deletePegasusDomain;
- (void)deleteSizeInBytes;
- (void)deleteTimeToLiveInSeconds;

@end
