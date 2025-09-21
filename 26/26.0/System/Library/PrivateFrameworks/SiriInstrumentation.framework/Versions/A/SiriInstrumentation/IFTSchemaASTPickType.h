@class NSData;

@interface IFTSchemaASTPickType : SISchemaInstrumentationMessage

@property (nonatomic) long long index;
@property (nonatomic) BOOL hasIndex;
@property (nonatomic) BOOL none;
@property (nonatomic) BOOL hasNone;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Astpicktype;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteIndex;
- (void)deleteNone;

@end
