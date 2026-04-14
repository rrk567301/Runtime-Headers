@class NSData;

@interface ORCHSchemaORCHMUXUserSessionState : SISchemaInstrumentationMessage {
    struct { unsigned char state : 1; unsigned char accessLevel : 1; unsigned char isEndOfRequest : 1; } _has;
}

@property (nonatomic) int state;
@property (nonatomic) BOOL hasState;
@property (nonatomic) int accessLevel;
@property (nonatomic) BOOL hasAccessLevel;
@property (nonatomic) BOOL isEndOfRequest;
@property (nonatomic) BOOL hasIsEndOfRequest;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAccessLevel;
- (void)deleteIsEndOfRequest;
- (void)deleteState;

@end
