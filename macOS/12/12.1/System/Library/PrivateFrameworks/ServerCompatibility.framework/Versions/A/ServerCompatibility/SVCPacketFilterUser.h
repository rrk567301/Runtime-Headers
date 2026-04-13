@interface SVCPacketFilterUser : NSObject

@property struct __PFUser { } *baseUser;
@property struct __PFUser { } *user;
@property long long baseTransactionID;
@property long long transactionID;

+ (id)alloc;
+ (id)sharedUser;

- (void)dealloc;
- (id)init;
- (BOOL)beginTransaction;
- (BOOL)commitTransaction;
- (BOOL)hasBaseRules;
- (BOOL)setBaseRules;
- (BOOL)flushBaseRules;
- (BOOL)addRuleToTransactionWithAddress:(id)a0 portRange:(id)a1 protocol:(id)a2 action:(id)a3;
- (BOOL)clearTransaction;
- (BOOL)flushRules;
- (void)printRulesToPath:(id)a0;

@end
