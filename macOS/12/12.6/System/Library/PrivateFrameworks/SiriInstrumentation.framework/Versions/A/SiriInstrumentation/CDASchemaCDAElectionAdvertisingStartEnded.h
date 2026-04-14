@class NSData;

@interface CDASchemaCDAElectionAdvertisingStartEnded : SISchemaInstrumentationMessage {
    struct { unsigned char state : 1; } _has;
}

@property (nonatomic) int state;
@property (nonatomic) BOOL hasState;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteState;
- (id)suppressMessageUnderConditions;

@end
