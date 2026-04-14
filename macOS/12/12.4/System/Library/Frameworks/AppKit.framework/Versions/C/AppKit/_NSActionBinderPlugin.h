@class NSString;

@interface _NSActionBinderPlugin : _NSBinderPlugin <_NSActionBinderPlugin> {
    long long _actionIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isUsableWithObject:(id)a0;

- (id)initWithBinder:(id)a0 object:(id)a1;
- (BOOL)prefersEnabledOverEditable:(id)a0;
- (BOOL)conditionalBehaviorOffByDefault:(id)a0;
- (BOOL)targetAndArgumentsAcceptableForPerformAction;
- (BOOL)invokeSelector:(SEL)a0 withArguments:(id)a1 forBinding:(id)a2 object:(id)a3;
- (void)_cacheTransientStateOfObject:(id)a0;
- (void)_clearCachedTransientStateOfObject:(id)a0;
- (BOOL)needsAction;

@end
