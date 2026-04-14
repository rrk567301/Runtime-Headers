@class TSTTableDataStore, TSULocale, TSTTableDataListItemCache;

@interface TSTTableDataListCache : NSObject

@property (retain, nonatomic) TSTTableDataStore *dataStore;
@property (retain, nonatomic) TSULocale *locale;
@property (retain, nonatomic) TSTTableDataListItemCache *formats;
@property (retain, nonatomic) TSTTableDataListItemCache *styles;

+ (id)cacheWithDataStore:(id)a0;

- (void).cxx_destruct;
- (id)initWithDataStore:(id)a0;
- (id)styleForKey:(unsigned int)a0;
- (id)formatForKey:(unsigned int)a0;

@end
