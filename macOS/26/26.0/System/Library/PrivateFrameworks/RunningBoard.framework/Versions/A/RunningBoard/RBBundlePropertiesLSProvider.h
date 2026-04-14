@protocol RBBundlePropertiesLSProviderDelegate;

@interface RBBundlePropertiesLSProvider : NSObject

@property (weak, nonatomic) id<RBBundlePropertiesLSProviderDelegate> delegate;

- (id)propertiesForIdentity:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
