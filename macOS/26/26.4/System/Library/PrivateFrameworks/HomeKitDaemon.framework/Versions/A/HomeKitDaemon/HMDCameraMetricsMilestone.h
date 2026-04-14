@class NSString;

@interface HMDCameraMetricsMilestone : HMFObject

@property (readonly, copy) NSString *key;
@property (readonly) long long timestamp;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0 timestamp:(long long)a1;

@end
