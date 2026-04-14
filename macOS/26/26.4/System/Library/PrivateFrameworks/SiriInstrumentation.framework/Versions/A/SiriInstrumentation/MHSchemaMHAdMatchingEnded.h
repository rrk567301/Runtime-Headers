@class NSString, NSData;

@interface MHSchemaMHAdMatchingEnded : SISchemaInstrumentationMessage {
    struct { unsigned char adBlockerDismissalType : 1; unsigned char shazamScore : 1; unsigned char adBlockerSource : 1; } _has;
}

@property (nonatomic) int adBlockerDismissalType;
@property (nonatomic) BOOL hasAdBlockerDismissalType;
@property (copy, nonatomic) NSString *adName;
@property (nonatomic) BOOL hasAdName;
@property (nonatomic) float shazamScore;
@property (nonatomic) BOOL hasShazamScore;
@property (nonatomic) int adBlockerSource;
@property (nonatomic) BOOL hasAdBlockerSource;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAdBlockerDismissalType;
- (void)deleteAdBlockerSource;
- (void)deleteAdName;
- (void)deleteShazamScore;

@end
