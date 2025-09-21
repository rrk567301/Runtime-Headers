@class NSString, NSData;

@interface SISchemaSpeechResultSelected : SISchemaInstrumentationMessage {
    struct { unsigned char source : 1; } _has;
}

@property (copy, nonatomic) NSString *resultCandidateId;
@property (nonatomic) BOOL hasResultCandidateId;
@property (nonatomic) int source;
@property (nonatomic) BOOL hasSource;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteResultCandidateId;
- (void)deleteSource;

@end
