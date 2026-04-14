@class NSCache, UnitsInfo, NSLock;

@interface AvailableUnitRanks : NSObject

@property (class, readonly, nonatomic) AvailableUnitRanks *shared;

@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSCache *availableRanks;
@property (retain, nonatomic) UnitsInfo *unitsInfo;

- (void)clearCache;
- (void).cxx_destruct;
- (id)init;
- (id)ranks;
- (id)conversionVerbsWithLocale:(id)a0 from:(BOOL)a1;
- (id)conversionVerbsWithLocalization:(id)a0 from:(BOOL)a1;
- (id)ranksWithLocales:(id)a0;
- (id)ranksWithLocales:(id)a0 cachedOnly:(BOOL)a1;

@end
