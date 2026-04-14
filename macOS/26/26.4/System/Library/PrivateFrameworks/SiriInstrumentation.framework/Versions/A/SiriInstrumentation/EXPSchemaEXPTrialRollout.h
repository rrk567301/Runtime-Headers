@class NSString, NSArray, NSData;

@interface EXPSchemaEXPTrialRollout : SISchemaInstrumentationMessage {
    struct { unsigned char deploymentId : 1; unsigned char status : 1; } _has;
}

@property (copy, nonatomic) NSString *rolloutId;
@property (nonatomic) BOOL hasRolloutId;
@property (copy, nonatomic) NSString *rampId;
@property (nonatomic) BOOL hasRampId;
@property (nonatomic) unsigned int deploymentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (copy, nonatomic) NSArray *namespaces;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)namespacesCount;
- (void)clearNamespaces;
- (void)deleteRolloutId;
- (void)addNamespaces:(id)a0;
- (void)deleteDeploymentId;
- (void)deleteNamespaces;
- (void)deleteRampId;
- (void)deleteStatus;
- (id)namespacesAtIndex:(unsigned long long)a0;

@end
