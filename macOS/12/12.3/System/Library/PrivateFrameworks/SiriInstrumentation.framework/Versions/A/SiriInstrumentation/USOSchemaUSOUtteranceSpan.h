@class NSData;

@interface USOSchemaUSOUtteranceSpan : SISchemaInstrumentationMessage {
    struct { unsigned char startIndex : 1; unsigned char endIndex : 1; unsigned char startUnicodeScalarIndex : 1; unsigned char endUnicodeScalarIndex : 1; unsigned char startMilliseconds : 1; unsigned char endMilliseconds : 1; } _has;
}

@property (nonatomic) unsigned int startIndex;
@property (nonatomic) BOOL hasStartIndex;
@property (nonatomic) unsigned int endIndex;
@property (nonatomic) BOOL hasEndIndex;
@property (nonatomic) unsigned int startUnicodeScalarIndex;
@property (nonatomic) BOOL hasStartUnicodeScalarIndex;
@property (nonatomic) unsigned int endUnicodeScalarIndex;
@property (nonatomic) BOOL hasEndUnicodeScalarIndex;
@property (nonatomic) int startMilliseconds;
@property (nonatomic) BOOL hasStartMilliseconds;
@property (nonatomic) int endMilliseconds;
@property (nonatomic) BOOL hasEndMilliseconds;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteStartIndex;
- (void)deleteEndIndex;
- (void)deleteStartUnicodeScalarIndex;
- (void)deleteEndUnicodeScalarIndex;
- (void)deleteStartMilliseconds;
- (void)deleteEndMilliseconds;
- (id)suppressMessageUnderConditions;

@end
