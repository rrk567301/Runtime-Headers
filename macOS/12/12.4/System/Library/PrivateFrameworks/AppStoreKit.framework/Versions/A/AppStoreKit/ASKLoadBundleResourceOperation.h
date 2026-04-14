@class NSString, NSArray;

@interface ASKLoadBundleResourceOperation : ASKLoadResourceOperation

@property (readonly, copy, nonatomic) NSString *resourceName;
@property (readonly, copy, nonatomic) NSArray *searchBundles;

+ (id)supportedScheme;
+ (id)_searchBundles;

- (void).cxx_destruct;
- (void)main;
- (id)initWithURLRequest:(id)a0 dataConsumer:(id)a1;
- (id)initWithResourceName:(id)a0;

@end
