@class NSData;

@interface HomeKitSchemaHKAudioTopologyReported : SISchemaInstrumentationMessage {
    struct { unsigned char audioTopology : 1; unsigned char isLeader : 1; } _has;
}

@property (nonatomic) int audioTopology;
@property (nonatomic) char hasAudioTopology;
@property (nonatomic) char isLeader;
@property (nonatomic) char hasIsLeader;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAudioTopology;
- (void)deleteIsLeader;
- (id)suppressMessageUnderConditions;

@end
