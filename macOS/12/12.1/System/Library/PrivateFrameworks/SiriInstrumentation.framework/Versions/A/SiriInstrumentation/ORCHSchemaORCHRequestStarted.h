@class NSData, SISchemaUUID;

@interface ORCHSchemaORCHRequestStarted : SISchemaInstrumentationMessage {
    struct { unsigned char requestType : 1; unsigned char siriUODEnabled : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *orchestratorSessionId;
@property (nonatomic) BOOL hasOrchestratorSessionId;
@property (nonatomic) int requestType;
@property (nonatomic) BOOL hasRequestType;
@property (nonatomic) BOOL siriUODEnabled;
@property (nonatomic) BOOL hasSiriUODEnabled;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;

@end
