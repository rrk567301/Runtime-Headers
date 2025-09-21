@class NSData;

@interface NLXSchemaSSUUserRequestMatchInfo : SISchemaInstrumentationMessage {
    struct { unsigned char matchingUtteranceCandidateType : 1; unsigned char numEntities : 1; } _has;
}

@property (nonatomic) int matchingUtteranceCandidateType;
@property (nonatomic) char hasMatchingUtteranceCandidateType;
@property (nonatomic) unsigned int numEntities;
@property (nonatomic) char hasNumEntities;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteMatchingUtteranceCandidateType;
- (void)deleteNumEntities;
- (id)suppressMessageUnderConditions;

@end
