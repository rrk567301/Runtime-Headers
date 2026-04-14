@class NSMutableArray;

@interface ATXPBInfoEngineCachedSuggestions : PBCodable <NSCopying> {
    unsigned long long _length;
    NSMutableArray *_cachedSuggestionIds;
    NSMutableArray *_cachedSuggestionSourceIds;
    struct { unsigned char length : 1; } _has;
}

- (id)dictionaryRepresentation;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
