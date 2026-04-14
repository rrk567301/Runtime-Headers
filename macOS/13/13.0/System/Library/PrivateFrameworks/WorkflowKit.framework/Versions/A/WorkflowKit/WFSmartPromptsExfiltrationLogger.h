@class NSMutableDictionary;

@interface WFSmartPromptsExfiltrationLogger : NSObject

@property (retain) NSMutableDictionary *store;

- (id)init;
- (void).cxx_destruct;
- (void)logExfiltratedItemsCount:(unsigned long long)a0 actionUUID:(id)a1 contentOrigin:(id)a2;
- (unsigned long long)currentExfiltratedItemCountForActionUUID:(id)a0 contentOrigin:(id)a1;
- (id)attributionSetByRewritingSetWithLoggedCounts:(id)a0 forExfiltratingActionUUID:(id)a1;

@end
