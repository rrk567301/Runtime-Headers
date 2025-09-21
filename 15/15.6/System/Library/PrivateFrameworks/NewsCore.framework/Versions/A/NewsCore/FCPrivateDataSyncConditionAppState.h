@interface FCPrivateDataSyncConditionAppState : NSObject <FCPrivateDataSyncCondition>

@property (readonly, nonatomic, getter=isSatisfied) char satisfied;

- (id)description;
- (id)_appState;

@end
