@class NSString, NSValue, CoalitionComputeMetrics;

@interface PLCoalitionDataObject : NSObject

@property (retain) NSString *bundleID;
@property (retain) NSString *launchdName;
@property (retain) NSValue *coalStruct;
@property unsigned long long coalitionID;
@property (retain) CoalitionComputeMetrics *metrics;

- (void).cxx_destruct;
- (id)description;
- (void)dealloc;

@end
