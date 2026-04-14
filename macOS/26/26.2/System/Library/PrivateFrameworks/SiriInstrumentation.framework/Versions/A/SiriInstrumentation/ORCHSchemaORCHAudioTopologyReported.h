@class NSData;

@interface ORCHSchemaORCHAudioTopologyReported : SISchemaInstrumentationMessage {
    struct { unsigned char audioTopology : 1; unsigned char isLeader : 1; } _has;
}

@property (nonatomic) int audioTopology;
@property (nonatomic) BOOL hasAudioTopology;
@property (nonatomic) BOOL isLeader;
@property (nonatomic) BOOL hasIsLeader;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteAudioTopology;
- (void)deleteIsLeader;

@end
