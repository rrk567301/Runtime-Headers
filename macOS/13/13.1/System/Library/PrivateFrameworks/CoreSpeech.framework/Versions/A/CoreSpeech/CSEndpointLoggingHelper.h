@interface CSEndpointLoggingHelper : NSObject

+ (id)getMHClientEventByMhUUID:(id)a0;
+ (id)getMHStatisticDistributionInfoFromDictionary:(id)a0;
+ (id)getMHStatisticDistributionInfoFromDictionary:(id)a0 withScaleFactor:(double)a1;
+ (void)reportMHEndpointerAccessibleContextEventWithThresholdType:(id)a0 MhId:(id)a1;
+ (void)reportServerEndpointWithMhId:(id)a0;

@end
