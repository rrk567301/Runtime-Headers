@class NSMutableDictionary;

@interface SVXServiceCommandDelayedActionStore : NSObject {
    NSMutableDictionary *_actionsByKey;
}

- (id)actionForKey:(id)a0;
- (void)setAction:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)removeAllActions;
- (id)init;
- (void)removeActionForKey:(id)a0;

@end
