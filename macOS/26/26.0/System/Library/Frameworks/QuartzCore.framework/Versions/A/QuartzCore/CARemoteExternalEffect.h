@class NSDictionary, NSString;

@interface CARemoteExternalEffect : CARemoteEffect

@property (retain, nonatomic) NSDictionary *propertiesByState;
@property (copy) NSString *effectName;

+ (BOOL)supportsSecureCoding;
+ (id)defaultValueForKey:(id)a0;
+ (id)effectWithName:(id)a0;

- (void)dealloc;
- (BOOL)shouldArchiveValueForKey:(id)a0;
- (id)name;
- (id)initWithName:(id)a0;
- (BOOL)_setCARenderRemoteEffect:(void *)a0 layer:(void *)a1;
- (void *)_copyRenderRemoteEffectForLayer:(void *)a0;
- (id)_copyWithZone:(struct _NSZone { } *)a0 preservingEffectId:(BOOL)a1;
- (void)_setPropertiesByState:(struct __CFDictionary { } *)a0;
- (id)propertiesForState:(id)a0;
- (void)setProperties:(id)a0 forState:(id)a1;

@end
