@interface ATXSpotlightClientHelper : NSObject

@property (class, nonatomic, readonly) ATXSpotlightClientHelper *sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)encodedToolInvocationsForDemoWithAppIntentToolIDOverrides:(id)a0;
- (id)encodedToolInvocationsForToolIDs:(id)a0;

@end
