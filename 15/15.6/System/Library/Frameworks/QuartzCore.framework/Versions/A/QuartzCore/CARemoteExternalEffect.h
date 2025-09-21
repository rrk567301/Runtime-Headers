@class NSDictionary, NSString;

@interface CARemoteExternalEffect : CARemoteEffect

@property (retain, nonatomic) NSDictionary *propertiesByState;
@property (copy) NSString *effectName;

+ (char)supportsSecureCoding;
+ (id)defaultValueForKey:(id)a0;
+ (id)effectWithName:(id)a0;

- (void)dealloc;
- (id)name;
- (id)initWithName:(id)a0;
- (char)_setCARenderRemoteEffect:(void *)a0 layer:(void *)a1;
- (void *)_copyRenderRemoteEffectForLayer:(void *)a0;
- (id)_copyWithZone:(struct _NSZone { } *)a0 preservingEffectId:(char)a1;
- (void)_setPropertiesByState:(struct __CFDictionary { } *)a0;
- (id)propertiesForState:(id)a0;
- (void)setProperties:(id)a0 forState:(id)a1;
- (char)shouldArchiveValueForKey:(id)a0;

@end
