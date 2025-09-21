@class NSArray, NSData;

@interface HALSchemaHALCrossDeviceCommandExecutionEnded : SISchemaInstrumentationMessage {
    struct { unsigned char action : 1; unsigned char actionResult : 1; unsigned char homeKitTarget : 1; } _has;
}

@property (copy, nonatomic) NSArray *selecteds;
@property (nonatomic) int action;
@property (nonatomic) char hasAction;
@property (nonatomic) int actionResult;
@property (nonatomic) char hasActionResult;
@property (nonatomic) int homeKitTarget;
@property (nonatomic) char hasHomeKitTarget;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addSelected:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)selectedAtIndex:(unsigned long long)a0;
- (void)deleteAction;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)clearSelected;
- (void)deleteActionResult;
- (void)deleteHomeKitTarget;
- (void)deleteSelected;
- (unsigned long long)selectedCount;
- (id)suppressMessageUnderConditions;

@end
