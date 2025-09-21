@class NSArray, NSData, SISchemaUUID, INFERENCESchemaINFERENCEContactQueryMetadata;

@interface INFERENCESchemaINFERENCEContactCandidatesInfoGenerated : SISchemaInstrumentationMessage {
    struct { unsigned char ontologySource : 1; unsigned char isEntityCandidateRetrievalEnabled : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *originalResolutionContextId;
@property (nonatomic) char hasOriginalResolutionContextId;
@property (retain, nonatomic) SISchemaUUID *queryId;
@property (nonatomic) char hasQueryId;
@property (retain, nonatomic) INFERENCESchemaINFERENCEContactQueryMetadata *contactQueryMetadata;
@property (nonatomic) char hasContactQueryMetadata;
@property (nonatomic) int ontologySource;
@property (nonatomic) char hasOntologySource;
@property (copy, nonatomic) NSArray *candidates;
@property (nonatomic) char isEntityCandidateRetrievalEnabled;
@property (nonatomic) char hasIsEntityCandidateRetrievalEnabled;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)candidatesCount;
- (void)clearCandidates;
- (id)initWithJSON:(id)a0;
- (void)addCandidates:(id)a0;
- (id)candidatesAtIndex:(unsigned long long)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteCandidates;
- (void)deleteContactQueryMetadata;
- (void)deleteIsEntityCandidateRetrievalEnabled;
- (void)deleteOntologySource;
- (void)deleteOriginalResolutionContextId;
- (void)deleteQueryId;
- (id)suppressMessageUnderConditions;

@end
