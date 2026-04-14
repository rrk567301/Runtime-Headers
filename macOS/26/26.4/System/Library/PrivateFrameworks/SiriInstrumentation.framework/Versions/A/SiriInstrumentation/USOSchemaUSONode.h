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

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteVerbLabel;
- (void)deleteEntityLabel;
- (void)deleteUsoElementId;
- (void)deleteUsoVerbElementId;

@end
