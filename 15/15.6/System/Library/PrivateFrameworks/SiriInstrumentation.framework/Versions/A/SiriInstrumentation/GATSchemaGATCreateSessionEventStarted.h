@class NSData;

@interface GATSchemaGATCreateSessionEventStarted : SISchemaInstrumentationMessage {
    struct { unsigned char exist : 1; } _has;
}

@property (nonatomic) char exist;
@property (nonatomic) char hasExist;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteExist;
- (id)suppressMessageUnderConditions;

@end
