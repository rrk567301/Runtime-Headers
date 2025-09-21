@class NSData;

@interface ORCHSchemaORCHMUXUserSessionState : SISchemaInstrumentationMessage {
    struct { unsigned char state : 1; unsigned char accessLevel : 1; unsigned char isEndOfRequest : 1; } _has;
}

@property (nonatomic) int state;
@property (nonatomic) char hasState;
@property (nonatomic) int accessLevel;
@property (nonatomic) char hasAccessLevel;
@property (nonatomic) char isEndOfRequest;
@property (nonatomic) char hasIsEndOfRequest;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAccessLevel;
- (void)deleteIsEndOfRequest;
- (void)deleteState;
- (id)suppressMessageUnderConditions;

@end
