@class NSData;

@interface QDSchemaQDAppPreLaunchTriggered : SISchemaInstrumentationMessage {
    struct { unsigned char isPredictionCorrect : 1; unsigned char isPreLaunchExecuted : 1; } _has;
}

@property (nonatomic) char isPredictionCorrect;
@property (nonatomic) char hasIsPredictionCorrect;
@property (nonatomic) char isPreLaunchExecuted;
@property (nonatomic) char hasIsPreLaunchExecuted;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsPreLaunchExecuted;
- (void)deleteIsPredictionCorrect;
- (id)suppressMessageUnderConditions;

@end
