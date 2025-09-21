@class NSData;

@interface IFTSchemaASTPickType : SISchemaInstrumentationMessage

@property (nonatomic) long long index;
@property (nonatomic) char hasIndex;
@property (nonatomic) char none;
@property (nonatomic) char hasNone;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Astpicktype;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIndex;
- (void)deleteNone;
- (id)suppressMessageUnderConditions;

@end
