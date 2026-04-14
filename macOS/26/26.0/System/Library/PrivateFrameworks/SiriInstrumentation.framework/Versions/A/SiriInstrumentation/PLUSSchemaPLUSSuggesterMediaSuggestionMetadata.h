@class NSData;

@interface PLUSSchemaPLUSSuggesterMediaSuggestionMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char locality : 1; unsigned char serverTreatment : 1; unsigned char clientTreatment : 1; } _has;
}

@property (nonatomic) int locality;
@property (nonatomic) BOOL hasLocality;
@property (nonatomic) int serverTreatment;
@property (nonatomic) BOOL hasServerTreatment;
@property (nonatomic) int clientTreatment;
@property (nonatomic) BOOL hasClientTreatment;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteClientTreatment;
- (void)deleteLocality;
- (void)deleteServerTreatment;

@end
