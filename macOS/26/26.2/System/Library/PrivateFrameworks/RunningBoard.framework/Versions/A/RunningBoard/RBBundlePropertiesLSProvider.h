@protocol RBBundlePropertiesLSProviderDelegate;

@interface RBBundlePropertiesLSProvider : NSObject

@property (weak, nonatomic) id<RBBundlePropertiesLSProviderDelegate> delegate;

- (void).cxx_destruct;
- (id)description;
- (id)propertiesForIdentity:(id)a0;

@end
