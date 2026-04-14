@class NSArray;

@interface LUITestDisplayConfigurationManager : NSObject

@property (class, readonly) LUITestDisplayConfigurationManager *sharedTestDisplayConfigurationManager;

@property (readonly) NSArray *displayConfigurations;

- (void).cxx_destruct;
- (id)displayConfigurationWithTag:(long long)a0;

@end
