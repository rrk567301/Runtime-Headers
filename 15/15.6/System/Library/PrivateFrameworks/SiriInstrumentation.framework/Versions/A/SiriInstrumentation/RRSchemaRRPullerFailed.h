@class NSData;

@interface RRSchemaRRPullerFailed : SISchemaInstrumentationMessage {
    struct { unsigned char name : 1; unsigned char isTimeout : 1; } _has;
}

@property (nonatomic) int name;
@property (nonatomic) char hasName;
@property (nonatomic) char isTimeout;
@property (nonatomic) char hasIsTimeout;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsTimeout;
- (void)deleteName;
- (id)suppressMessageUnderConditions;

@end
