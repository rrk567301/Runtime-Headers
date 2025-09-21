@class NSDictionary, NSString;

@interface CARemotePropertyEffect : CARemoteEffect

@property (retain, nonatomic) NSDictionary *valuesByState;
@property (copy) NSString *keyPath;

+ (char)supportsSecureCoding;
+ (id)defaultValueForKey:(id)a0;
+ (id)effectWithKeyPath:(id)a0;

- (void)dealloc;
- (id)name;
- (id)initWithKeyPath:(id)a0;
- (char)_setCARenderRemoteEffect:(void *)a0 layer:(void *)a1;
- (void *)_copyRenderRemoteEffectForLayer:(void *)a0;
- (id)_copyWithZone:(struct _NSZone { } *)a0 preservingEffectId:(char)a1;
- (void)_setValuesByState:(struct __CFDictionary { } *)a0;
- (void)setValue:(id)a0 forState:(id)a1;
- (char)shouldArchiveValueForKey:(id)a0;
- (id)valueForState:(id)a0;

@end
