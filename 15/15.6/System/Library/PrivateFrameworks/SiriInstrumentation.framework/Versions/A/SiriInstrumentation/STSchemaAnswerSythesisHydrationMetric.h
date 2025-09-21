@class NSData;

@interface STSchemaAnswerSythesisHydrationMetric : SISchemaInstrumentationMessage {
    struct { unsigned char asHydrationContentType : 1; unsigned char asHydrationPerContentTypeTimeInMs : 1; } _has;
}

@property (nonatomic) int asHydrationContentType;
@property (nonatomic) char hasAsHydrationContentType;
@property (nonatomic) int asHydrationPerContentTypeTimeInMs;
@property (nonatomic) char hasAsHydrationPerContentTypeTimeInMs;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAsHydrationContentType;
- (void)deleteAsHydrationPerContentTypeTimeInMs;
- (id)suppressMessageUnderConditions;

@end
