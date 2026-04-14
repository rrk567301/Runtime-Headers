@class NSData;

@interface QDSchemaQDAppPreLaunchTriggered : SISchemaInstrumentationMessage {
    struct { unsigned char isPredictionCorrect : 1; unsigned char isPreLaunchExecuted : 1; } _has;
}

@property (nonatomic) BOOL isPredictionCorrect;
@property (nonatomic) BOOL hasIsPredictionCorrect;
@property (nonatomic) BOOL isPreLaunchExecuted;
@property (nonatomic) BOOL hasIsPreLaunchExecuted;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteIsPreLaunchExecuted;
- (void)deleteIsPredictionCorrect;

@end
