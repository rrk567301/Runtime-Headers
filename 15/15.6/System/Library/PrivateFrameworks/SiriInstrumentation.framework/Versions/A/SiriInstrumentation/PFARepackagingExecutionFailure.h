@class PFARepackagingExecutionFBFFailure, NSData, PFARepackagingExecutionSandboxError;

@interface PFARepackagingExecutionFailure : SISchemaInstrumentationMessage

@property (retain, nonatomic) PFARepackagingExecutionFBFFailure *fbfFailure;
@property (nonatomic) char hasFbfFailure;
@property (retain, nonatomic) PFARepackagingExecutionSandboxError *sandboxError;
@property (nonatomic) char hasSandboxError;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichKind;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteFbfFailure;
- (void)deleteSandboxError;
- (id)suppressMessageUnderConditions;

@end
