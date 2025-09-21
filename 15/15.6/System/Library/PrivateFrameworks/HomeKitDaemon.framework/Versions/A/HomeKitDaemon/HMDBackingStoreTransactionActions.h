@class NSMutableDictionary, NSMutableSet, NSMutableArray, HMDBackingStore;

@interface HMDBackingStoreTransactionActions : HMDBackingStoreTransactionOptions {
    char _postApplyActionsInvoked;
    NSMutableArray *_postApplyActions;
    NSMutableSet *_postApplyActionNames;
}

@property (readonly, nonatomic) char local;
@property (readonly, nonatomic) char changed;
@property (readonly, nonatomic) char saveToAssistant;
@property (readonly, nonatomic) char saveToSharedUserAccount;
@property (weak, nonatomic) HMDBackingStore *backingStore;
@property (readonly, nonatomic) NSMutableDictionary *userInfo;

+ (id)logCategory;

- (id)description;
- (void).cxx_destruct;
- (id)logIdentifier;
- (char)addPostApplyActionIfNotPresent:(id)a0 usingBlock:(id /* block */)a1;
- (void)addPostApplyActionUsingBlock:(id /* block */)a0;
- (id)initWithBackingStore:(id)a0 options:(id)a1;
- (void)invokePostApplyActions;
- (void)markChanged;
- (void)markLocalChanged;
- (void)markSaveToAssistant;
- (void)markSaveToSharedUserAccount;

@end
