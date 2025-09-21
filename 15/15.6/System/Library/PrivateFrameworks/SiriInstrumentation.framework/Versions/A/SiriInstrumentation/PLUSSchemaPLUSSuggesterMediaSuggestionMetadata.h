@class NSData;

@interface PLUSSchemaPLUSSuggesterMediaSuggestionMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char locality : 1; unsigned char serverTreatment : 1; unsigned char clientTreatment : 1; } _has;
}

@property (nonatomic) int locality;
@property (nonatomic) char hasLocality;
@property (nonatomic) int serverTreatment;
@property (nonatomic) char hasServerTreatment;
@property (nonatomic) int clientTreatment;
@property (nonatomic) char hasClientTreatment;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteClientTreatment;
- (void)deleteLocality;
- (void)deleteServerTreatment;
- (id)suppressMessageUnderConditions;

@end
