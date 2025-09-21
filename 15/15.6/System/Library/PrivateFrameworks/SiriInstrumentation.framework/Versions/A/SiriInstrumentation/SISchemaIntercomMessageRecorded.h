@class NSData;

@interface SISchemaIntercomMessageRecorded : SISchemaInstrumentationMessage {
    struct { unsigned char durationInMs : 1; unsigned char isReply : 1; unsigned char disambiguationRequired : 1; unsigned char intercomTarget : 1; } _has;
}

@property (nonatomic) long long durationInMs;
@property (nonatomic) char hasDurationInMs;
@property (nonatomic) char isReply;
@property (nonatomic) char hasIsReply;
@property (nonatomic) char disambiguationRequired;
@property (nonatomic) char hasDisambiguationRequired;
@property (nonatomic) int intercomTarget;
@property (nonatomic) char hasIntercomTarget;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDisambiguationRequired;
- (void)deleteDurationInMs;
- (void)deleteIntercomTarget;
- (void)deleteIsReply;
- (id)suppressMessageUnderConditions;

@end
