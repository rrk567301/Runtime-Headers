@class NSString, NSData;

@interface USOSchemaUSONode : SISchemaInstrumentationMessage {
    struct { unsigned char usoElementId : 1; unsigned char usoVerbElementId : 1; } _has;
}

@property (nonatomic) unsigned int usoElementId;
@property (nonatomic) char hasUsoElementId;
@property (nonatomic) unsigned int usoVerbElementId;
@property (nonatomic) char hasUsoVerbElementId;
@property (copy, nonatomic) NSString *entityLabel;
@property (nonatomic) char hasEntityLabel;
@property (copy, nonatomic) NSString *verbLabel;
@property (nonatomic) char hasVerbLabel;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteVerbLabel;
- (void)deleteEntityLabel;
- (void)deleteUsoElementId;
- (void)deleteUsoVerbElementId;
- (id)suppressMessageUnderConditions;

@end
