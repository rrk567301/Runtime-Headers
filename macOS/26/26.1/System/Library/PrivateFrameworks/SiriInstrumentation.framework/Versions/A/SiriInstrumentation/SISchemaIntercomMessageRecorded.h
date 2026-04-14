@class NSData;

@interface SISchemaIntercomMessageRecorded : SISchemaInstrumentationMessage {
    struct { unsigned char durationInMs : 1; unsigned char isReply : 1; unsigned char disambiguationRequired : 1; unsigned char intercomTarget : 1; } _has;
}

@property (nonatomic) long long durationInMs;
@property (nonatomic) BOOL hasDurationInMs;
@property (nonatomic) BOOL isReply;
@property (nonatomic) BOOL hasIsReply;
@property (nonatomic) BOOL disambiguationRequired;
@property (nonatomic) BOOL hasDisambiguationRequired;
@property (nonatomic) int intercomTarget;
@property (nonatomic) BOOL hasIntercomTarget;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteDisambiguationRequired;
- (void)deleteDurationInMs;
- (void)deleteIntercomTarget;
- (void)deleteIsReply;

@end
