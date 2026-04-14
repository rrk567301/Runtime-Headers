@interface TUCallDirectoryMetadataCacheDataProvider : TUMetadataCacheDataProvider

@property (copy, nonatomic) id /* block */ countryDialingCode;
@property (copy, nonatomic) id /* block */ firstIdentificationEntriesForEnabledExtensions;
@property (readonly, nonatomic) BOOL cacheOnly;

- (void).cxx_destruct;
- (id)init;
- (void)updateCacheWithDestinationIDs:(id)a0 withGroup:(id)a1;
- (id)initWithCacheOnly:(BOOL)a0;
- (void)dealloc;

@end
