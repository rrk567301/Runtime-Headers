@interface TUCallDirectoryMetadataCacheDataProvider : TUMetadataCacheDataProvider

@property (copy, nonatomic) id /* block */ countryDialingCode;
@property (copy, nonatomic) id /* block */ firstIdentificationEntriesForEnabledExtensions;
@property (readonly, nonatomic) BOOL cacheOnly;

- (void)updateCacheWithDestinationIDs:(id)a0 withGroup:(id)a1;
- (void)dealloc;
- (id)initWithCacheOnly:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end
