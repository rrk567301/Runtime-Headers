@class NSURL, NSArray;

@interface RMFeatureOverrides : NSObject

@property (class, readonly, nonatomic, getter=bootstrapURL) NSURL *bootstrapURL;
@property (class, readonly, nonatomic, getter=useHTTPLogging) char useHTTPLogging;
@property (class, readonly, nonatomic, getter=permissiveURLSchemes) char permissiveURLSchemes;
@property (class, readonly, nonatomic, getter=qaMode) char qaMode;
@property (class, readonly, nonatomic, getter=testBooleanValue) char testBooleanValue;
@property (class, readonly, nonatomic, getter=hiddenDeclarationTypes) NSArray *hiddenDeclarationTypes;

+ (id)arrayForDefaultsKey:(id)a0;
+ (long long)batteryHealthServiceStateWithDefaultValue:(long long)a0;
+ (char)boolForDefaultsKey:(id)a0;
+ (id)defaultOverrideForKey:(id)a0;
+ (id)dictionaryForDefaultsKey:(id)a0;
+ (char)internalStatusForKey:(id)a0 defaultBool:(char)a1;
+ (id)internalStatusForKey:(id)a0 defaultValue:(id)a1;
+ (id)numberForDefaultsKey:(id)a0;
+ (id)stringForDefaultsKey:(id)a0;

@end
