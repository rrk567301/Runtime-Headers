@class NSURL;

@interface PKWebServiceStaticContentDataSourceFeature : PKWebServiceRegionFeature

@property (readonly, nonatomic, getter=isEnabled) char enabled;
@property (readonly, nonatomic) char blockStaticContentFetching;
@property (readonly, nonatomic) NSURL *contentURL;

- (void).cxx_destruct;
- (id)createProductsRequestWithIsFetchBlocked:(char *)a0;
- (id)initWithDictionary:(id)a0 region:(id)a1;

@end
