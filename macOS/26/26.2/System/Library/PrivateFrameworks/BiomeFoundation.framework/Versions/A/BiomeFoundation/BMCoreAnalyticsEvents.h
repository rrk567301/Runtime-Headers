@interface BMCoreAnalyticsEvents : NSObject

+ (void)sendEvent:(id)a0 payload:(id)a1;
+ (id)dictionaryWithDatavaultByUsageExecutableName:(id)a0;
+ (id)dictionaryWithDeletionPolicyMetrics:(id)a0 stream:(id)a1 numDeleted:(unsigned int)a2 exception:(BOOL)a3;
+ (void)sendDeletionPolicyMetrics:(id)a0 stream:(id)a1 numDeleted:(unsigned int)a2 exception:(BOOL)a3;
+ (void)sendDatavaultEntitlementUsage:(id)a0;
+ (id)dictionaryWithAllStreamsEventWritten:(BOOL)a0 size:(unsigned int)a1 streamIdentifier:(id)a2;
+ (void)sendAllStreamsEventWritten:(BOOL)a0 size:(unsigned int)a1 streamIdentifier:(id)a2;

@end
