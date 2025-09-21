@class NSString, NSData;

@interface INFERENCESchemaINFERENCECandidateInfo : SISchemaInstrumentationMessage {
    struct { unsigned char searchProvider : 1; unsigned char rank : 1; unsigned char score : 1; unsigned char isShownToUser : 1; unsigned char candidateType : 1; } _has;
}

@property (nonatomic) int searchProvider;
@property (nonatomic) char hasSearchProvider;
@property (nonatomic) unsigned int rank;
@property (nonatomic) char hasRank;
@property (nonatomic) float score;
@property (nonatomic) char hasScore;
@property (nonatomic) char isShownToUser;
@property (nonatomic) char hasIsShownToUser;
@property (copy, nonatomic) NSString *anonymizedEntityIdentifier;
@property (nonatomic) char hasAnonymizedEntityIdentifier;
@property (nonatomic) int candidateType;
@property (nonatomic) char hasCandidateType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAnonymizedEntityIdentifier;
- (void)deleteCandidateType;
- (void)deleteIsShownToUser;
- (void)deleteRank;
- (void)deleteScore;
- (void)deleteSearchProvider;
- (id)suppressMessageUnderConditions;

@end
