@class NSDictionary, NSMutableDictionary;

@interface JSOCBridgeSupportLoader : NSObject {
    NSMutableDictionary *_dictionary;
}

@property (readonly) NSDictionary *cache;

- (void)loadMetadata:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrameworkPath:(id)a0;
- (id)initWithLoadPath:(id)a0 exportedDylibs:(id)a1 metadata:(id)a2;

@end
