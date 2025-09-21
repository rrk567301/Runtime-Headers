@interface BMCoreAnalyticsEvents : NSObject

+ (id)dictionaryWithAllStreamsEventWritten:(char)a0 size:(unsigned int)a1 streamIdentifier:(id)a2;
+ (id)dictionaryWithDatavaultByUsageExecutableName:(id)a0;
+ (id)dictionaryWithDeletionPolicyMetrics:(id)a0 stream:(id)a1 numDeleted:(unsigned int)a2 exception:(char)a3;
+ (void)sendAllStreamsEventWritten:(char)a0 size:(unsigned int)a1 streamIdentifier:(id)a2;
+ (void)sendDatavaultEntitlementUsage:(id)a0;
+ (void)sendDeletionPolicyMetrics:(id)a0 stream:(id)a1 numDeleted:(unsigned int)a2 exception:(char)a3;
+ (void)sendEvent:(id)a0 payload:(id)a1;

@end
