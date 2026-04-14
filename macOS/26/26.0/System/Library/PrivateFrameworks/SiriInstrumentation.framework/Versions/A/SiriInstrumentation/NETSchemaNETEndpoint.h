@class NSData;

@interface NETSchemaNETEndpoint : SISchemaInstrumentationMessage {
    struct { unsigned char type : 1; unsigned char port : 1; } _has;
}

@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (nonatomic) unsigned int port;
@property (nonatomic) BOOL hasPort;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteType;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deletePort;

@end
