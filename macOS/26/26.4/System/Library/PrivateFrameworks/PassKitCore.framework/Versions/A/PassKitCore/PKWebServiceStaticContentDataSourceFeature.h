@class NSURL;

@interface PKWebServiceStaticContentDataSourceFeature : PKWebServiceRegionFeature

@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) BOOL blockStaticContentFetching;
@property (readonly, nonatomic) NSURL *contentURL;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 region:(id)a1;
- (id)createProductsRequestWithIsFetchBlocked:(BOOL *)a0;

@end
