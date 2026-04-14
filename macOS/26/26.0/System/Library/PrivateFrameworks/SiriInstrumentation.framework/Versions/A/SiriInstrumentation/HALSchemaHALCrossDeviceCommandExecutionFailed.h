@class NSData;

@interface HALSchemaHALCrossDeviceCommandExecutionFailed : SISchemaInstrumentationMessage {
    struct { unsigned char reason : 1; unsigned char action : 1; } _has;
}

@property (nonatomic) int reason;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) int action;
@property (nonatomic) BOOL hasAction;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (void)deleteReason;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteAction;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
