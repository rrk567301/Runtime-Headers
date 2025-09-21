@class NSData;

@interface NETSchemaNETHandShakeProtocol : SISchemaInstrumentationMessage {
    struct { unsigned char protocol : 1; unsigned char handShakeRTT : 1; unsigned char handShakeDuration : 1; } _has;
}

@property (nonatomic) int protocol;
@property (nonatomic) char hasProtocol;
@property (nonatomic) unsigned int handShakeRTT;
@property (nonatomic) char hasHandShakeRTT;
@property (nonatomic) unsigned long long handShakeDuration;
@property (nonatomic) char hasHandShakeDuration;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteHandShakeDuration;
- (void)deleteHandShakeRTT;
- (void)deleteProtocol;
- (id)suppressMessageUnderConditions;

@end
