@class NSMutableDictionary, NSMutableSet, NSMutableArray, HMDBackingStore;

@interface HMDBackingStoreTransactionActions : HMDBackingStoreTransactionOptions {
    BOOL _postApplyActionsInvoked;
    NSMutableArray *_postApplyActions;
    NSMutableSet *_postApplyActionNames;
}

@property (readonly, nonatomic) BOOL local;
@property (readonly, nonatomic) BOOL changed;
@property (readonly, nonatomic) BOOL saveToAssistant;
@property (readonly, nonatomic) BOOL saveToSharedUserAccount;
@property (weak, nonatomic) HMDBackingStore *backingStore;
@property (readonly, nonatomic) NSMutableDictionary *userInfo;

+ (id)logCategory;

- (void)markLocalChanged;
- (void)invokePostApplyActions;
- (id)description;
- (id)initWithBackingStore:(id)a0 options:(id)a1;
- (void)markSaveToSharedUserAccount;
- (void)addPostApplyActionUsingBlock:(id /* block */)a0;
- (id)logIdentifier;
- (void)markChanged;
- (void)markSaveToAssistant;
- (BOOL)addPostApplyActionIfNotPresent:(id)a0 usingBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
