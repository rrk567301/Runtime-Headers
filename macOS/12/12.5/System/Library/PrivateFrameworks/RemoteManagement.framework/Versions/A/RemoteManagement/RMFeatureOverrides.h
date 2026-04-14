@class NSURL;

@interface RMFeatureOverrides : NSObject

@property (class, readonly, nonatomic, getter=bootstrapURL) NSURL *bootstrapURL;
@property (class, readonly, nonatomic, getter=useHTTPLogging) BOOL useHTTPLogging;
@property (class, readonly, nonatomic, getter=permissiveURLSchemes) BOOL permissiveURLSchemes;

+ (id)internalStatusForKey:(id)a0 defaultValue:(id)a1;
+ (id)defaultOverrideForKey:(id)a0;
+ (id)stringForDefaultsKey:(id)a0;
+ (BOOL)boolForDefaultsKey:(id)a0;
+ (id)dictionaryForDefaultsKey:(id)a0;

@end
