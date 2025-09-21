@class NSString, NSData;

@interface MHSchemaMHAdMatchingEnded : SISchemaInstrumentationMessage {
    struct { unsigned char adBlockerDismissalType : 1; unsigned char shazamScore : 1; unsigned char adBlockerSource : 1; } _has;
}

@property (nonatomic) int adBlockerDismissalType;
@property (nonatomic) char hasAdBlockerDismissalType;
@property (copy, nonatomic) NSString *adName;
@property (nonatomic) char hasAdName;
@property (nonatomic) float shazamScore;
@property (nonatomic) char hasShazamScore;
@property (nonatomic) int adBlockerSource;
@property (nonatomic) char hasAdBlockerSource;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAdBlockerDismissalType;
- (void)deleteAdBlockerSource;
- (void)deleteAdName;
- (void)deleteShazamScore;
- (id)suppressMessageUnderConditions;

@end
