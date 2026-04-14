@class NSString;

@interface _GEORegionStoreSearchManager : NSObject <_GEORegionStoreSearchManager> {
    NSString *_searchString;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)matches:(id)a0;
- (void).cxx_destruct;
- (id)initWithSearchString:(id)a0 andLocale:(id)a1;

@end
