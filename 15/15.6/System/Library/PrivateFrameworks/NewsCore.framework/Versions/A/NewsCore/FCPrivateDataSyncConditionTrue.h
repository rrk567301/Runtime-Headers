@interface FCPrivateDataSyncConditionTrue : NSObject <FCPrivateDataSyncCondition>

@property (readonly, nonatomic, getter=isSatisfied) char satisfied;

- (id)description;

@end
