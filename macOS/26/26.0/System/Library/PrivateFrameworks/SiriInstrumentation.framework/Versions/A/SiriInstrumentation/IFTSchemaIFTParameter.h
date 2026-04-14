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
- (void)deleteKey;
- (void)deleteCandidate;
- (void)deleteCollectionIndex;

@end
