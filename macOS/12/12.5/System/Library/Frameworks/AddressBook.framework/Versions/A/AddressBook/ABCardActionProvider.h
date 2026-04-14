@class NSMutableDictionary;

@interface ABCardActionProvider : NSObject

@property (readonly) NSMutableDictionary *actionsByProperty;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)actionsForProperty:(id)a0;
- (id)actionsForSuggestedValueForProperty:(id)a0 value:(id)a1 delegate:(id)a2 item:(id)a3;
- (void)loadActions;
- (void)addActionResponder:(id)a0 forProperty:(id)a1;
- (void)addDelegatedActionResponderOfClass:(Class)a0 actionProperty:(id)a1;
- (void)addActionResponder:(id)a0;
- (void)loadInternalActions;
- (void)addDelegatedActionResponderOfClass:(Class)a0;

@end
