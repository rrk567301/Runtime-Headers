@class NSData;

@interface STSchemaSTGeneralSearchStarted : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; unsigned char preWarmed : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (nonatomic) BOOL preWarmed;
@property (nonatomic) BOOL hasPreWarmed;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (void)deleteExists;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deletePreWarmed;

@end
