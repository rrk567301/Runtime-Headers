@class ATXPBRequestForSuggestions, NSMutableArray;

@interface ATXPBRequestForIntentSuggestions : PBCodable <NSCopying> {
    struct { unsigned char limit : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBase;
@property (retain, nonatomic) ATXPBRequestForSuggestions *base;
@property (retain, nonatomic) NSMutableArray *bundleIds;
@property (retain, nonatomic) NSMutableArray *intentClassNames;
@property (nonatomic) BOOL hasLimit;
@property (nonatomic) int limit;

+ (Class)bundleIdsType;
+ (Class)intentClassNamesType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)bundleIdsCount;
- (void)clearBundleIds;
- (void)addBundleIds:(id)a0;
- (id)bundleIdsAtIndex:(unsigned long long)a0;
- (void)addIntentClassNames:(id)a0;
- (void)clearIntentClassNames;
- (id)intentClassNamesAtIndex:(unsigned long long)a0;
- (unsigned long long)intentClassNamesCount;

@end
