@class NSString, NSData;

@interface DODMLASRSchemaDODMLASRAlignmentInfo : SISchemaInstrumentationMessage {
    struct { unsigned char numDeletions : 1; unsigned char numInsertions : 1; unsigned char numSubstitutions : 1; unsigned char editDistance : 1; unsigned char referenceSize : 1; } _has;
}

@property (copy, nonatomic) NSString *referenceName;
@property (nonatomic) BOOL hasReferenceName;
@property (nonatomic) unsigned int numDeletions;
@property (nonatomic) BOOL hasNumDeletions;
@property (nonatomic) unsigned int numInsertions;
@property (nonatomic) BOOL hasNumInsertions;
@property (nonatomic) unsigned int numSubstitutions;
@property (nonatomic) BOOL hasNumSubstitutions;
@property (nonatomic) unsigned int editDistance;
@property (nonatomic) BOOL hasEditDistance;
@property (nonatomic) unsigned int referenceSize;
@property (nonatomic) BOOL hasReferenceSize;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEditDistance;
- (void)deleteNumDeletions;
- (void)deleteNumInsertions;
- (void)deleteNumSubstitutions;
- (void)deleteReferenceName;
- (void)deleteReferenceSize;

@end
