@class ATXPBResponseForRequestForSuggestions, NSString, NSData, NSMutableArray;

@interface ATXPBClientModelCacheUpdate : PBCodable <NSCopying> {
    struct { unsigned char cacheCreationDate : 1; } _has;
}

@property (readonly, nonatomic) char hasUuidString;
@property (retain, nonatomic) NSString *uuidString;
@property (retain, nonatomic) NSMutableArray *suggestions;
@property (readonly, nonatomic) char hasFeedbackMetadata;
@property (retain, nonatomic) NSData *feedbackMetadata;
@property (readonly, nonatomic) char hasClientModelId;
@property (retain, nonatomic) NSString *clientModelId;
@property (nonatomic) char hasCacheCreationDate;
@property (nonatomic) double cacheCreationDate;
@property (readonly, nonatomic) char hasResponseForRequestForSuggestions;
@property (retain, nonatomic) ATXPBResponseForRequestForSuggestions *responseForRequestForSuggestions;

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

@end
