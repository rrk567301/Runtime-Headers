@class NSString, NSDate;

@interface MPCNetworkReachabilityPrediction : NSObject <MPCPlaybackEngineEventPayloadValueJSONConvertible>

@property (readonly, nonatomic) long long impact;
@property (readonly, copy, nonatomic) NSDate *predictedStartTime;
@property (readonly, nonatomic) double predictedInterval;
@property (readonly, nonatomic) long long predictionConfidence;
@property (readonly, nonatomic) long long startTimeConfidence;
@property (readonly, nonatomic) long long durationConfidence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)payloadValueFromJSONValue:(id)a0;

- (void).cxx_destruct;
- (id)initWithImpact:(long long)a0 predictedStartTime:(id)a1 predictedInterval:(double)a2 predictionConfidence:(long long)a3 startTimeConfidence:(long long)a4 durationConfidence:(long long)a5;
- (id)mpc_jsonValue;

@end
