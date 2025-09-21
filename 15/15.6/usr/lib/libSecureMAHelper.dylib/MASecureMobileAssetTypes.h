@class NSDictionary;

@interface MASecureMobileAssetTypes : NSObject

@property (retain) NSDictionary *types;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (char)supportsDarwin:(id)a0;
- (id)_loadTypes;
- (char)fsTag:(unsigned int *)a0 forAssetType:(id)a1 specifier:(id)a2;

@end
