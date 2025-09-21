@class NSData;

@interface NLXSchemaSSUUserRequestMatchInfo : SISchemaInstrumentationMessage {
    struct { unsigned char matchingUtteranceCandidateType : 1; unsigned char numEntities : 1; } _has;
}

@property (nonatomic) int matchingUtteranceCandidateType;
@property (nonatomic) BOOL hasMatchingUtteranceCandidateType;
@property (nonatomic) unsigned int numEntities;
@property (nonatomic) BOOL hasNumEntities;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteMatchingUtteranceCandidateType;
- (void)deleteNumEntities;

@end
