@class NSString, NSData;

@interface DODMLASRSchemaDODMLASRAlignmentInfo : SISchemaInstrumentationMessage {
    struct { unsigned char numDeletions : 1; unsigned char numInsertions : 1; unsigned char numSubstitutions : 1; unsigned char editDistance : 1; unsigned char referenceSize : 1; } _has;
}

@property (copy, nonatomic) NSString *referenceName;
@property (nonatomic) char hasReferenceName;
@property (nonatomic) unsigned int numDeletions;
@property (nonatomic) char hasNumDeletions;
@property (nonatomic) unsigned int numInsertions;
@property (nonatomic) char hasNumInsertions;
@property (nonatomic) unsigned int numSubstitutions;
@property (nonatomic) char hasNumSubstitutions;
@property (nonatomic) unsigned int editDistance;
@property (nonatomic) char hasEditDistance;
@property (nonatomic) unsigned int referenceSize;
@property (nonatomic) char hasReferenceSize;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEditDistance;
- (void)deleteNumDeletions;
- (void)deleteNumInsertions;
- (void)deleteNumSubstitutions;
- (void)deleteReferenceName;
- (void)deleteReferenceSize;
- (id)suppressMessageUnderConditions;

@end
