@interface _PFPlaceholderMulticaster : PFMulticaster

+ (char)resolveInstanceMethod:(SEL)a0;
+ (void)convertToConcreteMulticaster:(id)a0 forReceiver:(id)a1;
+ (Class)placeholderSubclassOfClass:(Class)a0 named:(id)a1;
+ (char)tryConvertToConcreteMulticaster:(id)a0;

- (void)addReceiver:(id)a0;
- (void)__ignore;
- (void)addWeakReceiver:(id)a0;

@end
