@class NSData;

@interface RRSchemaRRPullerFailed : SISchemaInstrumentationMessage {
    struct { unsigned char name : 1; unsigned char isTimeout : 1; } _has;
}

@property (nonatomic) int name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) BOOL isTimeout;
@property (nonatomic) BOOL hasIsTimeout;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteIsTimeout;
- (void)deleteName;

@end
