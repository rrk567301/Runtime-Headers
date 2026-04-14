@class PFARepackagingExecutionFBFFailure, NSData, PFARepackagingExecutionSandboxError;

@interface PFARepackagingExecutionFailure : SISchemaInstrumentationMessage

@property (retain, nonatomic) PFARepackagingExecutionFBFFailure *fbfFailure;
@property (nonatomic) BOOL hasFbfFailure;
@property (retain, nonatomic) PFARepackagingExecutionSandboxError *sandboxError;
@property (nonatomic) BOOL hasSandboxError;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichKind;

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
- (void)deleteFbfFailure;
- (void)deleteSandboxError;

@end
