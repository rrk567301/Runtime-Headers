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
- (void)clearBundleIds;
- (unsigned long long)bundleIdsCount;
- (void)addBundleIds:(id)a0;
- (id)bundleIdsAtIndex:(unsigned long long)a0;
- (void)clearIntentClassNames;
- (void)addIntentClassNames:(id)a0;
- (unsigned long long)intentClassNamesCount;
- (id)intentClassNamesAtIndex:(unsigned long long)a0;

@end
