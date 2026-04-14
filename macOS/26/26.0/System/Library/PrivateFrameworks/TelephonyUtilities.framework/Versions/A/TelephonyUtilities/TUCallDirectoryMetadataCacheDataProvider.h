@interface TUCallDirectoryMetadataCacheDataProvider : TUMetadataCacheDataProvider

@property (copy, nonatomic) id /* block */ countryDialingCode;
@property (copy, nonatomic) id /* block */ firstIdentificationEntriesForEnabledExtensions;
@property (readonly, nonatomic) BOOL cacheOnly;

- (void)dealloc;
- (id)init;
- (id)initWithCacheOnly:(BOOL)a0;
- (void)updateCacheWithDestinationIDs:(id)a0 withGroup:(id)a1;
- (void).cxx_destruct;

@end
