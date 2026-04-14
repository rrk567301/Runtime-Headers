@class NSArray, NSString, NSData;

@interface FLOWSchemaFLOWKGQAExecution : SISchemaInstrumentationMessage {
    struct { unsigned char kgQAUsecase : 1; unsigned char isDisputedResponse : 1; } _has;
}

@property (nonatomic) int kgQAUsecase;
@property (nonatomic) BOOL hasKgQAUsecase;
@property (copy, nonatomic) NSArray *attributes;
@property (nonatomic) BOOL isDisputedResponse;
@property (nonatomic) BOOL hasIsDisputedResponse;
@property (copy, nonatomic) NSString *nlgKey;
@property (nonatomic) BOOL hasNlgKey;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)attributesCount;
- (void)clearAttributes;
- (void)addAttributes:(id)a0;
- (id)attributesAtIndex:(unsigned long long)a0;
- (void)deleteKgQAUsecase;
- (void)deleteAttributes;
- (void)deleteIsDisputedResponse;
- (void)deleteNlgKey;
- (id)suppressMessageUnderConditions;

@end
