@class NSData;

@interface FLOWSchemaFLOWWebAnswerExecution : SISchemaInstrumentationMessage {
    struct { unsigned char answerType : 1; unsigned char allowListType : 1; unsigned char fuzzyMatchType : 1; unsigned char subDomain : 1; unsigned char quality : 1; unsigned char answerClass : 1; } _has;
}

@property (nonatomic) unsigned int answerType;
@property (nonatomic) char hasAnswerType;
@property (nonatomic) unsigned int allowListType;
@property (nonatomic) char hasAllowListType;
@property (nonatomic) unsigned int fuzzyMatchType;
@property (nonatomic) char hasFuzzyMatchType;
@property (nonatomic) unsigned int subDomain;
@property (nonatomic) char hasSubDomain;
@property (nonatomic) unsigned int quality;
@property (nonatomic) char hasQuality;
@property (nonatomic) unsigned int answerClass;
@property (nonatomic) char hasAnswerClass;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSubDomain;
- (void)deleteAllowListType;
- (void)deleteAnswerClass;
- (void)deleteAnswerType;
- (void)deleteFuzzyMatchType;
- (void)deleteQuality;
- (id)suppressMessageUnderConditions;

@end
