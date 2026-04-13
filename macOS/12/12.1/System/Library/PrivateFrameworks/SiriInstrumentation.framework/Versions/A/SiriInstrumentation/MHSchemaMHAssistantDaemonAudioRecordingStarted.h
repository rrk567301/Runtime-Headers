@class NSData;

@interface MHSchemaMHAssistantDaemonAudioRecordingStarted : SISchemaInstrumentationMessage {
    struct { unsigned char audioInputRoute : 1; unsigned char source : 1; } _has;
}

@property (nonatomic) int audioInputRoute;
@property (nonatomic) BOOL hasAudioInputRoute;
@property (nonatomic) int source;
@property (nonatomic) BOOL hasSource;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;

@end
