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

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteClientTreatment;
- (void)deleteLocality;
- (void)deleteServerTreatment;

@end
