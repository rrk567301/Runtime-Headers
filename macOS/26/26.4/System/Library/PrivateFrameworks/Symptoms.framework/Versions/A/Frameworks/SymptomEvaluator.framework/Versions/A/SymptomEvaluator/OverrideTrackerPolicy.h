@class NSMutableDictionary;

@interface OverrideTrackerPolicy : NSObject {
    NSMutableDictionary *_maxConnectionPolicyOverrides;
    NSMutableDictionary *_maxRRCTimePolicyOverrides;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)maxRRCTimePolicyForTarget:(id)a0;
- (id)init;
- (id)maxConnectionPolicyForTarget:(id)a0;

@end
