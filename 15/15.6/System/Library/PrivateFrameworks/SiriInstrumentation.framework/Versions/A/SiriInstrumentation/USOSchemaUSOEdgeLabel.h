@class NSData, USOSchemaUSOLabel;

@interface USOSchemaUSOEdgeLabel : SISchemaInstrumentationMessage {
    struct { unsigned char usoElementId : 1; unsigned char enumeration : 1; } _has;
}

@property (nonatomic) unsigned int usoElementId;
@property (nonatomic) char hasUsoElementId;
@property (nonatomic) unsigned int enumeration;
@property (nonatomic) char hasEnumeration;
@property (retain, nonatomic) USOSchemaUSOLabel *baseEdgeLabel;
@property (nonatomic) char hasBaseEdgeLabel;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteBaseEdgeLabel;
- (void)deleteEnumeration;
- (void)deleteUsoElementId;
- (id)suppressMessageUnderConditions;

@end
