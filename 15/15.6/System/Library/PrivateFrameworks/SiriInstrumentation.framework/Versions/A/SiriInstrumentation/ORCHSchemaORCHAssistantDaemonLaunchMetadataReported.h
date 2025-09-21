@class NSData;

@interface ORCHSchemaORCHAssistantDaemonLaunchMetadataReported : SISchemaInstrumentationMessage {
    struct { unsigned char assistantDaemonSpawnTimestampInNs : 1; unsigned char assistantDaemonLoadedTimestampInNs : 1; unsigned char isFirstRequest : 1; } _has;
}

@property (nonatomic) long long assistantDaemonSpawnTimestampInNs;
@property (nonatomic) char hasAssistantDaemonSpawnTimestampInNs;
@property (nonatomic) long long assistantDaemonLoadedTimestampInNs;
@property (nonatomic) char hasAssistantDaemonLoadedTimestampInNs;
@property (nonatomic) char isFirstRequest;
@property (nonatomic) char hasIsFirstRequest;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAssistantDaemonLoadedTimestampInNs;
- (void)deleteAssistantDaemonSpawnTimestampInNs;
- (void)deleteIsFirstRequest;
- (id)suppressMessageUnderConditions;

@end
