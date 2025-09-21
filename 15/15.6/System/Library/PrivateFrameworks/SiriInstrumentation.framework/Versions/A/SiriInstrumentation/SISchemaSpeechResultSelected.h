@class NSString, NSData;

@interface SISchemaSpeechResultSelected : SISchemaInstrumentationMessage {
    struct { unsigned char source : 1; } _has;
}

@property (copy, nonatomic) NSString *resultCandidateId;
@property (nonatomic) char hasResultCandidateId;
@property (nonatomic) int source;
@property (nonatomic) char hasSource;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteResultCandidateId;
- (void)deleteSource;
- (id)suppressMessageUnderConditions;

@end
