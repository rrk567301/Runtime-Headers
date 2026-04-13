@class NSUUID;

@interface HMDUserActionPredictionSubscriber : NSObject

@property (readonly, copy) NSUUID *uuid;
@property (readonly) unsigned long long predictionLimit;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 predictionLimit:(unsigned long long)a1;

@end
