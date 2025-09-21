@class NSString, NSArray, NSData;

@interface EXPSchemaEXPTrialRollout : SISchemaInstrumentationMessage {
    struct { unsigned char deploymentId : 1; unsigned char status : 1; } _has;
}

@property (copy, nonatomic) NSString *rolloutId;
@property (nonatomic) char hasRolloutId;
@property (copy, nonatomic) NSString *rampId;
@property (nonatomic) char hasRampId;
@property (nonatomic) unsigned int deploymentId;
@property (nonatomic) char hasDeploymentId;
@property (nonatomic) int status;
@property (nonatomic) char hasStatus;
@property (copy, nonatomic) NSArray *namespaces;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearNamespaces;
- (unsigned long long)namespacesCount;
- (void)deleteRolloutId;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addNamespaces:(id)a0;
- (void)deleteDeploymentId;
- (void)deleteNamespaces;
- (void)deleteRampId;
- (void)deleteStatus;
- (id)namespacesAtIndex:(unsigned long long)a0;
- (id)suppressMessageUnderConditions;

@end
