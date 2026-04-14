@class NSMutableDictionary;

@interface OverrideTrackerPolicy : NSObject {
    NSMutableDictionary *_maxConnectionPolicyOverrides;
    NSMutableDictionary *_maxRRCTimePolicyOverrides;
}

+ (id)sharedInstance;

- (id)maxRRCTimePolicyForTarget:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)maxConnectionPolicyForTarget:(id)a0;

@end
