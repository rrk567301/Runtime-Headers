@class NSData, USOSchemaUSOGraph;

@interface PLUSSchemaPLUSContactSuggesterQueryStarted : SISchemaInstrumentationMessage {
    struct { unsigned char domain : 1; } _has;
}

@property (retain, nonatomic) USOSchemaUSOGraph *usoPersonQuery;
@property (nonatomic) BOOL hasUsoPersonQuery;
@property (nonatomic) int domain;
@property (nonatomic) BOOL hasDomain;
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
- (void)deleteDomain;
- (void)deleteUsoPersonQuery;

@end
