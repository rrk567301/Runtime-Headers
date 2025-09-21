@class NSMutableDictionary;

@interface SVXServiceCommandDelayedActionStore : NSObject {
    NSMutableDictionary *_actionsByKey;
}

- (id)actionForKey:(id)a0;
- (void)removeAllActions;
- (id)init;
- (void)setAction:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)removeActionForKey:(id)a0;

@end
