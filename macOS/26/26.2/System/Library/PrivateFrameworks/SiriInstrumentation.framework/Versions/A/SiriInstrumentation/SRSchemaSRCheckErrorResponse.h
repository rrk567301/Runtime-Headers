@class NSData;

@interface SRSchemaSRCheckErrorResponse : SISchemaInstrumentationMessage {
    struct { unsigned char predictedErrorType : 1; unsigned char selectedRecoveryStrategy : 1; } _has;
}

@property (nonatomic) int predictedErrorType;
@property (nonatomic) BOOL hasPredictedErrorType;
@property (nonatomic) int selectedRecoveryStrategy;
@property (nonatomic) BOOL hasSelectedRecoveryStrategy;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deletePredictedErrorType;
- (void)deleteSelectedRecoveryStrategy;

@end
