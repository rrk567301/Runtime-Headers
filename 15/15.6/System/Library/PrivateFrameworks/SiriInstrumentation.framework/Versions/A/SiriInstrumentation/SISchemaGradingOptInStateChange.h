@class NSString, NSData;

@interface SISchemaGradingOptInStateChange : SISchemaTopLevelUnionType {
    struct { unsigned char prevOptInState : 1; unsigned char newOptInState : 1; unsigned char source : 1; unsigned char epochEventTimestampInSeconds : 1; } _has;
}

@property (nonatomic) int prevOptInState;
@property (nonatomic) char hasPrevOptInState;
@property (nonatomic) int newOptInState;
@property (nonatomic) char hasNewOptInState;
@property (nonatomic) int source;
@property (nonatomic) char hasSource;
@property (copy, nonatomic) NSString *reason;
@property (nonatomic) char hasReason;
@property (copy, nonatomic) NSString *systemBuild;
@property (nonatomic) char hasSystemBuild;
@property (nonatomic) unsigned long long epochEventTimestampInSeconds;
@property (nonatomic) char hasEpochEventTimestampInSeconds;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteReason;
- (int)getAnyEventType;
- (void)deleteEpochEventTimestampInSeconds;
- (void)deleteNewOptInState;
- (void)deletePrevOptInState;
- (void)deleteSource;
- (void)deleteSystemBuild;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;

@end
