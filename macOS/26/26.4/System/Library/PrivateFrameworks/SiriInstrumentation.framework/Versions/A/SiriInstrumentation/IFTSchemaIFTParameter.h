@class NSString, IFTSchemaIFTCandidate, NSData;

@interface IFTSchemaIFTParameter : SISchemaInstrumentationMessage {
    struct { unsigned char collectionIndex : 1; } _has;
}

@property (copy, nonatomic) NSString *key;
@property (nonatomic) BOOL hasKey;
@property (nonatomic) long long collectionIndex;
@property (nonatomic) BOOL hasCollectionIndex;
@property (retain, nonatomic) IFTSchemaIFTCandidate *candidate;
@property (nonatomic) BOOL hasCandidate;
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
- (void)deleteKey;
- (void)deleteCandidate;
- (void)deleteCollectionIndex;

@end
