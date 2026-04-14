@class NSMutableDictionary;

@interface AXKUserDefaultsOverrider : NSObject

@property (retain, nonatomic) NSMutableDictionary *_previousValues;
@property (readonly, nonatomic) NSMutableDictionary *overrides;

+ (id)_convertNSNullToNil:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)apply;
- (id)initWithOverrides:(id)a0;
- (void)unset;
- (id)defaultsValueForKey:(id)a0;
- (void)defaultsSetValue:(id)a0 forKey:(id)a1;
- (void)defaultsSynchronize;

@end
