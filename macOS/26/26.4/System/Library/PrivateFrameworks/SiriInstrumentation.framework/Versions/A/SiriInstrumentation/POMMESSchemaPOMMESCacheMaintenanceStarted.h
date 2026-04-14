@class NSData;

@interface POMMESSchemaPOMMESCacheMaintenanceStarted : SISchemaInstrumentationMessage {
    struct { unsigned char timeSinceLastMaintenanceInSeconds : 1; } _has;
}

@property (nonatomic) unsigned int timeSinceLastMaintenanceInSeconds;
@property (nonatomic) BOOL hasTimeSinceLastMaintenanceInSeconds;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteTimeSinceLastMaintenanceInSeconds;

@end
