@class NSData;

@interface SICSchemaSICInvocationStarted : SISchemaInstrumentationMessage {
    struct { unsigned char isMuted : 1; unsigned char callType : 1; unsigned char callState : 1; unsigned char callAppType : 1; unsigned char participantCountBucket : 1; } _has;
}

@property (nonatomic) char isMuted;
@property (nonatomic) char hasIsMuted;
@property (nonatomic) int callType;
@property (nonatomic) char hasCallType;
@property (nonatomic) int callState;
@property (nonatomic) char hasCallState;
@property (nonatomic) int callAppType;
@property (nonatomic) char hasCallAppType;
@property (nonatomic) int participantCountBucket;
@property (nonatomic) char hasParticipantCountBucket;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCallState;
- (void)deleteCallAppType;
- (void)deleteCallType;
- (void)deleteIsMuted;
- (void)deleteParticipantCountBucket;
- (id)suppressMessageUnderConditions;

@end
