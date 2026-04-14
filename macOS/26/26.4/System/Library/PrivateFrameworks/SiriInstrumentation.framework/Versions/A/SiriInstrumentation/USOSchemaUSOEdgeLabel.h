@class NSData, USOSchemaUSOLabel;

@interface USOSchemaUSOEdgeLabel : SISchemaInstrumentationMessage {
    struct { unsigned char usoElementId : 1; unsigned char enumeration : 1; } _has;
}

@property (nonatomic) unsigned int usoElementId;
@property (nonatomic) BOOL hasUsoElementId;
@property (nonatomic) unsigned int enumeration;
@property (nonatomic) BOOL hasEnumeration;
@property (retain, nonatomic) USOSchemaUSOLabel *baseEdgeLabel;
@property (nonatomic) BOOL hasBaseEdgeLabel;
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
- (void)deleteBaseEdgeLabel;
- (void)deleteEnumeration;
- (void)deleteUsoElementId;

@end
