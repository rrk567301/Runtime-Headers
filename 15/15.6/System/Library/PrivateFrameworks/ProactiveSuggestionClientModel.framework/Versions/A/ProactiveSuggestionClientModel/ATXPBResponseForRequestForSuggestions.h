@class ATXPBRequestForIntentSuggestions, NSString, NSData, ATXPBRequestForInteractionSuggestions, NSMutableArray, ATXPBRequestForContextualActionSuggestions;

@interface ATXPBResponseForRequestForSuggestions : PBCodable <NSCopying> {
    struct { unsigned char responseCode : 1; } _has;
}

@property (readonly, nonatomic) char hasUuidString;
@property (retain, nonatomic) NSString *uuidString;
@property (retain, nonatomic) NSMutableArray *suggestions;
@property (readonly, nonatomic) char hasFeedbackMetadata;
@property (retain, nonatomic) NSData *feedbackMetadata;
@property (nonatomic) char hasResponseCode;
@property (nonatomic) int responseCode;
@property (readonly, nonatomic) char hasErrorData;
@property (retain, nonatomic) NSData *errorData;
@property (readonly, nonatomic) char hasInteractionSuggestionRequest;
@property (retain, nonatomic) ATXPBRequestForInteractionSuggestions *interactionSuggestionRequest;
@property (readonly, nonatomic) char hasContextualActionSuggestionRequest;
@property (retain, nonatomic) ATXPBRequestForContextualActionSuggestions *contextualActionSuggestionRequest;
@property (readonly, nonatomic) char hasIntentSuggestionRequest;
@property (retain, nonatomic) ATXPBRequestForIntentSuggestions *intentSuggestionRequest;

+ (Class)suggestionsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addSuggestions:(id)a0;
- (void)clearSuggestions;
- (id)suggestionsAtIndex:(unsigned long long)a0;
- (unsigned long long)suggestionsCount;
- (int)StringAsResponseCode:(id)a0;
- (id)responseCodeAsString:(int)a0;

@end
