@class NSData;

@interface GATSchemaGATNotForMeResponseReturned : SISchemaInstrumentationMessage {
    struct { unsigned char isUtteranceRewritten : 1; } _has;
}

@property (nonatomic) BOOL isUtteranceRewritten;
@property (nonatomic) BOOL hasIsUtteranceRewritten;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsUtteranceRewritten;

@end
