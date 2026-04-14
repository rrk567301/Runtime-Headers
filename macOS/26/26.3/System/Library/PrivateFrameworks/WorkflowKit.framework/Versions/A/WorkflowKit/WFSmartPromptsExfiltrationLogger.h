@class NSMutableDictionary;

@interface WFSmartPromptsExfiltrationLogger : NSObject

@property (retain) NSMutableDictionary *store;

- (id)init;
- (void).cxx_destruct;
- (id)attributionSetByRewritingSetWithLoggedCounts:(id)a0 forExfiltratingActionUUID:(id)a1;
- (unsigned long long)countItemsExfiltratedSoFarByActionWithUUID:(id)a0 contentOrigin:(id)a1;
- (void)logExfiltratedItems:(id)a0 actionUUID:(id)a1 contentOrigin:(id)a2;

@end
