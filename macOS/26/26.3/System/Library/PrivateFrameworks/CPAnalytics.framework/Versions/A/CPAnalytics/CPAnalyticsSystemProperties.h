@class NSArray, NSMutableDictionary;

@interface CPAnalyticsSystemProperties : NSObject

@property (class, readonly) NSArray *staticPhotoLibraryProperties;
@property (class, readonly) NSArray *dynamicPhotoLibraryProperties;

@property (retain, nonatomic) NSMutableDictionary *systemProperties;
@property (retain, nonatomic) NSMutableDictionary *dynamicProperties;

- (id)propertyForKey:(id)a0 forEventName:(id)a1 payloadForSystemPropertyExtraction:(id)a2;
- (id)init;
- (void)removePhotoLibraryProperties;
- (void)addDynamicProperty:(id)a0 withProvider:(id)a1;
- (void).cxx_destruct;
- (void)addProperty:(id)a0 withValue:(id)a1;

@end
