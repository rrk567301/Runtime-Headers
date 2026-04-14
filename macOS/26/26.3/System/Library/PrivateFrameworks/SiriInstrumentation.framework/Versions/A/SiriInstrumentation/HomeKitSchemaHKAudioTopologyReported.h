@class NSData;

@interface HomeKitSchemaHKAudioTopologyReported : SISchemaInstrumentationMessage {
    struct { unsigned char audioTopology : 1; unsigned char isLeader : 1; } _has;
}

@property (nonatomic) int audioTopology;
@property (nonatomic) BOOL hasAudioTopology;
@property (nonatomic) BOOL isLeader;
@property (nonatomic) BOOL hasIsLeader;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteAudioTopology;
- (void)deleteIsLeader;

@end
