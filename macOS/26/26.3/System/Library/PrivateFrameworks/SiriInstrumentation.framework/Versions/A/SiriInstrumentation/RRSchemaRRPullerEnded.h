@class NSData;

@interface RRSchemaRRPullerEnded : SISchemaInstrumentationMessage {
    struct { unsigned char name : 1; unsigned char entityCount : 1; } _has;
}

@property (nonatomic) int name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) int entityCount;
@property (nonatomic) BOOL hasEntityCount;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteEntityCount;
- (void)deleteName;

@end
