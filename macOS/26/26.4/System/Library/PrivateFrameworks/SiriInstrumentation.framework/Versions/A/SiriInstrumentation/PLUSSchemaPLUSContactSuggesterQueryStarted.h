@class NSData, USOSchemaUSOGraph;

@interface PLUSSchemaPLUSContactSuggesterQueryStarted : SISchemaInstrumentationMessage {
    struct { unsigned char domain : 1; } _has;
}

@property (retain, nonatomic) USOSchemaUSOGraph *usoPersonQuery;
@property (nonatomic) BOOL hasUsoPersonQuery;
@property (nonatomic) int domain;
@property (nonatomic) BOOL hasDomain;
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
- (void)deleteDomain;
- (void)deleteUsoPersonQuery;

@end
