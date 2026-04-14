@class NSArray, NSMutableDictionary;

@interface CPAnalyticsSystemProperties : NSObject

@property (class, readonly) NSArray *staticPhotoLibraryProperties;
@property (class, readonly) NSArray *dynamicPhotoLibraryProperties;

@property (retain, nonatomic) NSMutableDictionary *systemProperties;
@property (retain, nonatomic) NSMutableDictionary *dynamicProperties;

- (void).cxx_destruct;
- (void)removePhotoLibraryProperties;
- (void)addProperty:(id)a0 withValue:(id)a1;
- (void)addDynamicProperty:(id)a0 withProvider:(id)a1;
- (id)propertyForKey:(id)a0 forEventName:(id)a1 payloadForSystemPropertyExtraction:(id)a2;
- (id)init;

@end
