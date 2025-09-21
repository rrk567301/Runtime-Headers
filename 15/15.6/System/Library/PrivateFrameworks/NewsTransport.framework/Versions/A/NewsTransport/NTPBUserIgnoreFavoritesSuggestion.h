@class NSString;

@interface NTPBUserIgnoreFavoritesSuggestion : PBCodable <NSCopying> {
    struct { unsigned char ignoreLocation : 1; unsigned char ignoredFeedType : 1; unsigned char suggestionPositionWhenIgnored : 1; } _has;
}

@property (nonatomic) char hasIgnoredFeedType;
@property (nonatomic) int ignoredFeedType;
@property (nonatomic) char hasIgnoreLocation;
@property (nonatomic) int ignoreLocation;
@property (readonly, nonatomic) char hasIgnoredFeedId;
@property (retain, nonatomic) NSString *ignoredFeedId;
@property (nonatomic) char hasSuggestionPositionWhenIgnored;
@property (nonatomic) int suggestionPositionWhenIgnored;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
