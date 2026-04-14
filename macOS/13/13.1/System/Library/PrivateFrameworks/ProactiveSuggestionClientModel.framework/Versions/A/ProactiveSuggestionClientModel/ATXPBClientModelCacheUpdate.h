@class ATXPBResponseForRequestForSuggestions, NSString, NSData, NSMutableArray;

@interface ATXPBClientModelCacheUpdate : PBCodable <NSCopying> {
    struct { unsigned char cacheCreationDate : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUuidString;
@property (retain, nonatomic) NSString *uuidString;
@property (retain, nonatomic) NSMutableArray *suggestions;
@property (readonly, nonatomic) BOOL hasFeedbackMetadata;
@property (retain, nonatomic) NSData *feedbackMetadata;
@property (readonly, nonatomic) BOOL hasClientModelId;
@property (retain, nonatomic) NSString *clientModelId;
@property (nonatomic) BOOL hasCacheCreationDate;
@property (nonatomic) double cacheCreationDate;
@property (readonly, nonatomic) BOOL hasResponseForRequestForSuggestions;
@property (retain, nonatomic) ATXPBResponseForRequestForSuggestions *responseForRequestForSuggestions;

+ (Class)suggestionsType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearSuggestions;
- (void)addSuggestions:(id)a0;
- (unsigned long long)suggestionsCount;
- (id)suggestionsAtIndex:(unsigned long long)a0;

@end
