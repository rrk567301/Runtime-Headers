@class NSData;

@interface GMSSchemaGMSModelRequestEnded : SISchemaInstrumentationMessage {
    struct { unsigned char tokensPerSecond : 1; unsigned char responseTokensCount : 1; unsigned char kbPerSecond : 1; unsigned char responseKbCount : 1; unsigned char imagePerSecond : 1; unsigned char imageCount : 1; unsigned char timeToFirstTokenInSeconds : 1; unsigned char timeToLastTokenInSeconds : 1; unsigned char responseCharactersCount : 1; unsigned char responseTimeInMilliseconds : 1; } _has;
}

@property (nonatomic) double tokensPerSecond;
@property (nonatomic) char hasTokensPerSecond;
@property (nonatomic) unsigned int responseTokensCount;
@property (nonatomic) char hasResponseTokensCount;
@property (nonatomic) double kbPerSecond;
@property (nonatomic) char hasKbPerSecond;
@property (nonatomic) unsigned int responseKbCount;
@property (nonatomic) char hasResponseKbCount;
@property (nonatomic) float imagePerSecond;
@property (nonatomic) char hasImagePerSecond;
@property (nonatomic) unsigned int imageCount;
@property (nonatomic) char hasImageCount;
@property (nonatomic) double timeToFirstTokenInSeconds;
@property (nonatomic) char hasTimeToFirstTokenInSeconds;
@property (nonatomic) double timeToLastTokenInSeconds;
@property (nonatomic) char hasTimeToLastTokenInSeconds;
@property (nonatomic) unsigned int responseCharactersCount;
@property (nonatomic) char hasResponseCharactersCount;
@property (nonatomic) unsigned int responseTimeInMilliseconds;
@property (nonatomic) char hasResponseTimeInMilliseconds;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteTimeToFirstTokenInSeconds;
- (void)deleteImageCount;
- (void)deleteImagePerSecond;
- (void)deleteKbPerSecond;
- (void)deleteResponseCharactersCount;
- (void)deleteResponseKbCount;
- (void)deleteResponseTimeInMilliseconds;
- (void)deleteResponseTokensCount;
- (void)deleteTimeToLastTokenInSeconds;
- (void)deleteTokensPerSecond;
- (id)suppressMessageUnderConditions;

@end
