@class NSData;

@interface NETSchemaNETDebugSessionConnectionPingInfo : SISchemaInstrumentationMessage {
    struct { unsigned char pingCount : 1; unsigned char meanPingInMs : 1; unsigned char unacknowledgedPingCount : 1; } _has;
}

@property (nonatomic) unsigned int pingCount;
@property (nonatomic) char hasPingCount;
@property (nonatomic) double meanPingInMs;
@property (nonatomic) char hasMeanPingInMs;
@property (nonatomic) unsigned int unacknowledgedPingCount;
@property (nonatomic) char hasUnacknowledgedPingCount;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deletePingCount;
- (void)deleteMeanPingInMs;
- (void)deleteUnacknowledgedPingCount;
- (id)suppressMessageUnderConditions;

@end
