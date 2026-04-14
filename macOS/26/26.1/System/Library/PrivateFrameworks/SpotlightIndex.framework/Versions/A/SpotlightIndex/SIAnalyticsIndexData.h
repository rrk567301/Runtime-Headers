@class NSString, NSMutableDictionary;

@interface SIAnalyticsIndexData : NSObject {
    NSString *_prefix;
    NSMutableDictionary *_heartbeatData;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _heartbeatLock;
}

- (id)heartbeatData;
- (void)incrementCount:(long long)a0 forKey:(id)a1;
- (id)initWithPrefix:(id)a0 data:(id)a1;
- (void)setTimestamp:(double)a0 forKey:(id)a1;

@end
