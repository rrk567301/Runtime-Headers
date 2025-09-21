@class NSMutableArray;

@interface ATXPBInfoEngineCachedSuggestions : PBCodable <NSCopying> {
    unsigned long long _length;
    NSMutableArray *_cachedSuggestionIds;
    NSMutableArray *_cachedSuggestionSourceIds;
    struct { unsigned char length : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
