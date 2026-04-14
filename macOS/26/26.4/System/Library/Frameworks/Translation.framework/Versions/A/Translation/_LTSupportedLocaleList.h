@class NSArray;

@interface _LTSupportedLocaleList : NSObject <NSCopying> {
    NSArray *_legacySupportedPairs;
    NSArray *_aiSupportedPairs;
}

@property (readonly, copy, nonatomic) NSArray *allSupportedPairs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)supportsLocalePair:(id)a0 forStrategy:(long long)a1;
- (id)_allLocalePairsForLocales:(id)a0;
- (id)localePairsForStrategy:(long long)a0;
- (id)localesExclusiveToStrategy:(long long)a0;
- (void)setLocales:(id)a0 forStrategy:(long long)a1;
- (void)setSupportedPairs:(id)a0 forStrategy:(long long)a1;

@end
