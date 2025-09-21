@interface HMDHAPAccessoryReaderWriterMetricHelper : NSObject

+ (char)_isLinkFallback:(id)a0 reportedLinkLayerType:(long long)a1;
+ (void)updateLogEvents:(id)a0 withResponses:(id)a1 forTaskID:(id)a2 shouldSubmit:(char)a3;
+ (void)updateLogEvents:(id)a0 withResponses:(id)a1 remoteMessageResponse:(id)a2 forTaskID:(id)a3 shouldSubmit:(char)a4;

@end
