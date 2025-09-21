@class NSData;

@interface NETSchemaNETEndpoint : SISchemaInstrumentationMessage {
    struct { unsigned char type : 1; unsigned char port : 1; } _has;
}

@property (nonatomic) int type;
@property (nonatomic) char hasType;
@property (nonatomic) unsigned int port;
@property (nonatomic) char hasPort;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteType;
- (void)deletePort;
- (id)suppressMessageUnderConditions;

@end
