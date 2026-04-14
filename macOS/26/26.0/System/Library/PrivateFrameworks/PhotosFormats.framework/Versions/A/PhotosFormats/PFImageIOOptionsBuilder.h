@class NSDictionary, NSMutableDictionary;

@interface PFImageIOOptionsBuilder : NSObject {
    NSMutableDictionary *_customOptions;
}

@property (readonly, copy) NSDictionary *options;
@property BOOL applyTransform;
@property BOOL includeHDRGainMaps;
@property BOOL includeDerivativeDefaults;
@property BOOL skipMetadata;
@property unsigned long long colorBehavior;
@property unsigned int orientation;
@property long long maximumLongSideLength;

- (id)objectForKeyedSubscript:(id)a0;
- (id)initWithOptions:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
