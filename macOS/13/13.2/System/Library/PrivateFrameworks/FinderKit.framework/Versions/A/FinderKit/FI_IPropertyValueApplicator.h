@interface FI_IPropertyValueApplicator : NSObject

+ (id)applicator;

- (int)applyValue:(id)a0 toNodes:(const void *)a1;
- (BOOL)canModifyNodes:(const void *)a0;

@end
