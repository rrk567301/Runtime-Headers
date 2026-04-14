@class NSString, NSData;

@interface IFTSchemaASTPath : SISchemaInstrumentationMessage {
    struct { unsigned char collectionIndex : 1; } _has;
}

@property (copy, nonatomic) NSString *parameterName;
@property (nonatomic) BOOL hasParameterName;
@property (nonatomic) long long collectionIndex;
@property (nonatomic) BOOL hasCollectionIndex;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteCollectionIndex;
- (void)deleteParameterName;

@end
