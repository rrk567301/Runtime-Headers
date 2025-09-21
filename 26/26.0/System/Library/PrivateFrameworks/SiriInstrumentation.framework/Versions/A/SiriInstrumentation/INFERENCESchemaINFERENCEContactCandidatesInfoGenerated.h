@class NSArray, NSData, SISchemaUUID, INFERENCESchemaINFERENCEContactQueryMetadata;

@interface INFERENCESchemaINFERENCEContactCandidatesInfoGenerated : SISchemaInstrumentationMessage {
    struct { unsigned char ontologySource : 1; unsigned char isEntityCandidateRetrievalEnabled : 1; } _has;
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
@property (nonatomic) BOOL isEntityCandidateRetrievalEnabled;
@property (nonatomic) BOOL hasIsEntityCandidateRetrievalEnabled;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)clearCandidates;
- (unsigned long long)candidatesCount;
- (void)addCandidates:(id)a0;
- (id)candidatesAtIndex:(unsigned long long)a0;
- (void)deleteCandidates;
- (void)deleteContactQueryMetadata;
- (void)deleteIsEntityCandidateRetrievalEnabled;
- (void)deleteOntologySource;
- (void)deleteOriginalResolutionContextId;
- (void)deleteQueryId;

@end
