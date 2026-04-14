@class POMMESSchemaPOMMESCacheInvalidationEnded, NSData, POMMESSchemaPOMMESCacheInvalidationFailed, POMMESSchemaPOMMESCacheInvalidationStarted;

@interface POMMESSchemaPOMMESCacheInvalidationContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) POMMESSchemaPOMMESCacheInvalidationStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) POMMESSchemaPOMMESCacheInvalidationEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) POMMESSchemaPOMMESCacheInvalidationFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

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
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;

@end
