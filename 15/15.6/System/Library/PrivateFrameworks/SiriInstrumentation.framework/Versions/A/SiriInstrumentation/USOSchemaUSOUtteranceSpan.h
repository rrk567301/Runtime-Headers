@class NSData;

@interface USOSchemaUSOUtteranceSpan : SISchemaInstrumentationMessage {
    struct { unsigned char startIndex : 1; unsigned char endIndex : 1; unsigned char startUnicodeScalarIndex : 1; unsigned char endUnicodeScalarIndex : 1; unsigned char startMilliseconds : 1; unsigned char endMilliseconds : 1; } _has;
}

@property (nonatomic) unsigned int startIndex;
@property (nonatomic) char hasStartIndex;
@property (nonatomic) unsigned int endIndex;
@property (nonatomic) char hasEndIndex;
@property (nonatomic) unsigned int startUnicodeScalarIndex;
@property (nonatomic) char hasStartUnicodeScalarIndex;
@property (nonatomic) unsigned int endUnicodeScalarIndex;
@property (nonatomic) char hasEndUnicodeScalarIndex;
@property (nonatomic) int startMilliseconds;
@property (nonatomic) char hasStartMilliseconds;
@property (nonatomic) int endMilliseconds;
@property (nonatomic) char hasEndMilliseconds;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEndIndex;
- (void)deleteEndMilliseconds;
- (void)deleteEndUnicodeScalarIndex;
- (void)deleteStartIndex;
- (void)deleteStartMilliseconds;
- (void)deleteStartUnicodeScalarIndex;
- (id)suppressMessageUnderConditions;

@end
