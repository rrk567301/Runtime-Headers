@class NSString;

@interface _NSActionBinderPlugin : _NSBinderPlugin <_NSActionBinderPlugin> {
    long long _actionIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)isUsableWithObject:(id)a0;

- (void)_cacheTransientStateOfObject:(id)a0;
- (void)_clearCachedTransientStateOfObject:(id)a0;
- (char)conditionalBehaviorOffByDefault:(id)a0;
- (id)initWithBinder:(id)a0 object:(id)a1;
- (char)invokeSelector:(SEL)a0 withArguments:(id)a1 forBinding:(id)a2 object:(id)a3;
- (char)needsAction;
- (char)prefersEnabledOverEditable:(id)a0;
- (char)targetAndArgumentsAcceptableForPerformAction;

@end
