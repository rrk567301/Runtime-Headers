@class NSMutableArray;

@interface OKSettings : NSObject {
    NSMutableArray *_transactions;
}

+ (id)transactionsManager;
+ (void)resetAndApplySettings:(id)a0 toObject:(id)a1 withResolution:(id)a2;
+ (void)resetObject:(id)a0 withResolution:(id)a1;
+ (void)resetObject:(id)a0 notRespondingToSettingsKeys:(id)a1 withResolution:(id)a2;
+ (void)applyValue:(id)a0 forKey:(id)a1 ofType:(unsigned long long)a2 toObject:(id)a3;
+ (void)applySettings:(id)a0 toObject:(id)a1 withResolution:(id)a2;
+ (id /* block */)_newSettingGetterBlockForKey:(id)a0 ofType:(unsigned long long)a1 optionalSubType:(unsigned long long)a2 optionalClass:(Class)a3 optionalMapping:(id)a4;
+ (id /* block */)_newSettingSetterBlockForKey:(id)a0 ofType:(unsigned long long)a1 optionalSubType:(unsigned long long)a2 optionalClass:(Class)a3 optionalMapping:(id)a4;
+ (BOOL)exportClassSettings:(Class)a0 toJavaScriptContext:(id)a1;
+ (id)objectFromClass:(Class)a0 withSettings:(id)a1 andResolution:(id)a2;
+ (void)beginApplyingSettings;
+ (BOOL)isApplyingSettings;
+ (void)registerApplyingSettingsUpdateBlock:(id /* block */)a0 forKey:(id)a1;
+ (void)applyUpdateBlockOnce:(id /* block */)a0 forKey:(id)a1;
+ (void)commitApplyingSettings;

- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)beginTransaction;
- (void)commitTransaction;
- (void)registerUpdateBlock:(id /* block */)a0 forKey:(id)a1;
- (BOOL)hasPendingTransaction;
- (id)pendingTransaction;

@end
