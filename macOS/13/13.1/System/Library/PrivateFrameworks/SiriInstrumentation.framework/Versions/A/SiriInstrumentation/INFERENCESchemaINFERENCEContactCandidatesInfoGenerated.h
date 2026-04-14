@class NSArray, NSData, SISchemaUUID, INFERENCESchemaINFERENCEContactQueryMetadata;

@interface INFERENCESchemaINFERENCEContactCandidatesInfoGenerated : SISchemaInstrumentationMessage {
    struct { unsigned char ontologySource : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *originalResolutionContextId;
@property (nonatomic) BOOL hasOriginalResolutionContextId;
@property (retain, nonatomic) SISchemaUUID *queryId;
@property (nonatomic) BOOL hasQueryId;
@property (retain, nonatomic) INFERENCESchemaINFERENCEContactQueryMetadata *contactQueryMetadata;
@property (nonatomic) BOOL hasContactQueryMetadata;
@property (nonatomic) int ontologySource;
@property (nonatomic) BOOL hasOntologySource;
@property (copy, nonatomic) NSArray *candidates;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearCandidates;
- (unsigned long long)candidatesCount;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteOriginalResolutionContextId;
- (void)deleteQueryId;
- (void)deleteContactQueryMetadata;
- (void)deleteOntologySource;
- (void)deleteCandidates;
- (void)addCandidates:(id)a0;
- (id)candidatesAtIndex:(unsigned long long)a0;

@end
