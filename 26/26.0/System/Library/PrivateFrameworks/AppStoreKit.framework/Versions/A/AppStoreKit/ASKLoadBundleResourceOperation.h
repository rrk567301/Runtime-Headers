@class NSString, NSArray;

@interface ASKLoadBundleResourceOperation : ASKLoadResourceOperation

@property (readonly, copy, nonatomic) NSString *resourceName;
@property (readonly, copy, nonatomic) NSArray *searchBundles;

+ (id)supportedScheme;
+ (id)_searchBundles;

- (void)main;
- (void).cxx_destruct;
- (id)initWithResourceName:(id)a0;
- (id)initWithURLRequest:(id)a0 URLSession:(id)a1 dataConsumer:(id)a2;

@end
