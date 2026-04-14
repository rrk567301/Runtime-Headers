@class NSMutableDictionary;

@interface AXKUserDefaultsOverrider : NSObject

@property (retain, nonatomic) NSMutableDictionary *_previousValues;
@property (readonly, nonatomic) NSMutableDictionary *overrides;

+ (id)_convertNSNullToNil:(id)a0;

- (void)dealloc;
- (void)apply;
- (void).cxx_destruct;
- (id)init;
- (void)defaultsSetValue:(id)a0 forKey:(id)a1;
- (void)defaultsSynchronize;
- (id)defaultsValueForKey:(id)a0;
- (id)initWithOverrides:(id)a0;
- (void)unset;

@end
