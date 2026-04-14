@class NSString, NSArray, NSData;

@interface NLXSchemaCDMToken : SISchemaInstrumentationMessage {
    struct { unsigned char begin : 1; unsigned char end : 1; unsigned char isSignificant : 1; unsigned char isWhitespace : 1; unsigned char tokenIndex : 1; unsigned char nonWhitespaceTokenIndex : 1; } _has;
}

@property (copy, nonatomic) NSString *value;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) unsigned int begin;
@property (nonatomic) BOOL hasBegin;
@property (nonatomic) unsigned int end;
@property (nonatomic) BOOL hasEnd;
@property (nonatomic) BOOL isSignificant;
@property (nonatomic) BOOL hasIsSignificant;
@property (nonatomic) BOOL isWhitespace;
@property (nonatomic) BOOL hasIsWhitespace;
@property (nonatomic) unsigned int tokenIndex;
@property (nonatomic) BOOL hasTokenIndex;
@property (nonatomic) unsigned int nonWhitespaceTokenIndex;
@property (nonatomic) BOOL hasNonWhitespaceTokenIndex;
@property (copy, nonatomic) NSString *cleanValue;
@property (nonatomic) BOOL hasCleanValue;
@property (copy, nonatomic) NSArray *normalizedValues;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearNormalizedValues;
- (void)addNormalizedValues:(id)a0;
- (void)deleteValue;
- (void)deleteBegin;
- (void)deleteEnd;
- (void)deleteIsSignificant;
- (void)deleteIsWhitespace;
- (void)deleteTokenIndex;
- (void)deleteNonWhitespaceTokenIndex;
- (void)deleteCleanValue;
- (void)deleteNormalizedValues;
- (unsigned long long)normalizedValuesCount;
- (id)normalizedValuesAtIndex:(unsigned long long)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
