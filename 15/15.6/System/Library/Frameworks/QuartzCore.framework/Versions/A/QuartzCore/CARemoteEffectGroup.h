@class NSArray, NSString;

@interface CARemoteEffectGroup : CARemoteEffect

@property (copy) NSArray *effects;
@property (copy) NSString *groupName;
@property (getter=isMatched) char matched;
@property (getter=isSource) char source;

+ (char)supportsSecureCoding;
+ (id)defaultValueForKey:(id)a0;
+ (id)groupWithEffects:(id)a0;

- (void)dealloc;
- (id)init;
- (id)name;
- (char)_setCARenderRemoteEffect:(void *)a0 layer:(void *)a1;
- (void *)_copyRenderRemoteEffectForLayer:(void *)a0;
- (id)_copyWithZone:(struct _NSZone { } *)a0 preservingEffectId:(char)a1;
- (id)initWithEffects:(id)a0;
- (char)shouldArchiveValueForKey:(id)a0;

@end
