@class NSString, NSData;

@interface USOSchemaUSONode : SISchemaInstrumentationMessage {
    struct { unsigned char usoElementId : 1; unsigned char usoVerbElementId : 1; } _has;
}

@property (nonatomic) unsigned int usoElementId;
@property (nonatomic) BOOL hasUsoElementId;
@property (nonatomic) unsigned int usoVerbElementId;
@property (nonatomic) BOOL hasUsoVerbElementId;
@property (copy, nonatomic) NSString *entityLabel;
@property (nonatomic) BOOL hasEntityLabel;
@property (copy, nonatomic) NSString *verbLabel;
@property (nonatomic) BOOL hasVerbLabel;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteUsoElementId;
- (void)deleteUsoVerbElementId;
- (void)deleteEntityLabel;
- (void)deleteVerbLabel;
- (id)suppressMessageUnderConditions;

@end
