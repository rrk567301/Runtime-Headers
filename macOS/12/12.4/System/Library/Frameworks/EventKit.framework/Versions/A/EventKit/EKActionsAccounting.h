@class NSMutableDictionary;

@interface EKActionsAccounting : NSObject

@property (retain, nonatomic) NSMutableDictionary *actions;

+ (id)sharedAccounting;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)recordResult:(long long)a0 forAction:(id)a1;
- (long long)resultForAction:(id)a0;

@end
