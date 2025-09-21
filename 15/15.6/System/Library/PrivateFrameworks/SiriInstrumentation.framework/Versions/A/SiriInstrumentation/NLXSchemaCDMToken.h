@class NSString, NSArray, NSData;

@interface NLXSchemaCDMToken : SISchemaInstrumentationMessage {
    struct { unsigned char begin : 1; unsigned char end : 1; unsigned char isSignificant : 1; unsigned char isWhitespace : 1; unsigned char tokenIndex : 1; unsigned char nonWhitespaceTokenIndex : 1; } _has;
}

@property (copy, nonatomic) NSString *value;
@property (nonatomic) char hasValue;
@property (nonatomic) unsigned int begin;
@property (nonatomic) char hasBegin;
@property (nonatomic) unsigned int end;
@property (nonatomic) char hasEnd;
@property (nonatomic) char isSignificant;
@property (nonatomic) char hasIsSignificant;
@property (nonatomic) char isWhitespace;
@property (nonatomic) char hasIsWhitespace;
@property (nonatomic) unsigned int tokenIndex;
@property (nonatomic) char hasTokenIndex;
@property (nonatomic) unsigned int nonWhitespaceTokenIndex;
@property (nonatomic) char hasNonWhitespaceTokenIndex;
@property (copy, nonatomic) NSString *cleanValue;
@property (nonatomic) char hasCleanValue;
@property (copy, nonatomic) NSArray *normalizedValues;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addNormalizedValues:(id)a0;
- (void)clearNormalizedValues;
- (void)deleteBegin;
- (void)deleteCleanValue;
- (void)deleteEnd;
- (void)deleteIsSignificant;
- (void)deleteIsWhitespace;
- (void)deleteNonWhitespaceTokenIndex;
- (void)deleteNormalizedValues;
- (void)deleteTokenIndex;
- (void)deleteValue;
- (id)normalizedValuesAtIndex:(unsigned long long)a0;
- (unsigned long long)normalizedValuesCount;
- (id)suppressMessageUnderConditions;

@end
