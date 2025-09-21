@class NSString, NSMutableArray;

@interface AWDCoreRoutineMagicMomentsSuggestionInstance : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char confidence : 1; unsigned char durationSinceLastSuggestion : 1; unsigned char reposponceTime : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasSuggestionId;
@property (retain, nonatomic) NSString *suggestionId;
@property (nonatomic) char hasConfidence;
@property (nonatomic) int confidence;
@property (retain, nonatomic) NSMutableArray *suggestions;
@property (nonatomic) char hasReposponceTime;
@property (nonatomic) int reposponceTime;
@property (nonatomic) char hasDurationSinceLastSuggestion;
@property (nonatomic) int durationSinceLastSuggestion;

+ (Class)suggestionsType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
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
