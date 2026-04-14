@class NSData, PFARepackagingExecutionFailure;

@interface PFARepackagingExecutionResult : SISchemaInstrumentationMessage {
    struct { unsigned char samplingResult : 1; } _has;
}

@property (nonatomic) int samplingResult;
@property (nonatomic) BOOL hasSamplingResult;
@property (nonatomic) BOOL success;
@property (nonatomic) BOOL hasSuccess;
@property (retain, nonatomic) PFARepackagingExecutionFailure *failure;
@property (nonatomic) BOOL hasFailure;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichSuccessorfail;

- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteFailure;
- (void)deleteSamplingResult;
- (void)deleteSuccess;

@end
