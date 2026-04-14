@class NSString;

@interface _GEORegionStoreSearchManager : NSObject <_GEORegionStoreSearchManager> {
    NSString *_searchString;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)matches:(id)a0;
- (id)initWithSearchString:(id)a0 andLocale:(id)a1;

@end
