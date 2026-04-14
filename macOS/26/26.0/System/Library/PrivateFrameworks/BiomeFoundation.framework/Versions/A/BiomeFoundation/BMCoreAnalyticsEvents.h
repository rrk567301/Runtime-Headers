@interface BMCoreAnalyticsEvents : NSObject

+ (void)sendEvent:(id)a0 payload:(id)a1;
+ (id)dictionaryWithDatavaultByUsageExecutableName:(id)a0;
+ (void)sendAllStreamsEventWritten:(BOOL)a0 size:(unsigned int)a1 streamIdentifier:(id)a2;
+ (id)dictionaryWithDeletionPolicyMetrics:(id)a0 stream:(id)a1 numDeleted:(unsigned int)a2 exception:(BOOL)a3;
+ (id)dictionaryWithAllStreamsEventWritten:(BOOL)a0 size:(unsigned int)a1 streamIdentifier:(id)a2;
+ (void)sendDatavaultEntitlementUsage:(id)a0;
+ (void)sendDeletionPolicyMetrics:(id)a0 stream:(id)a1 numDeleted:(unsigned int)a2 exception:(BOOL)a3;

@end
