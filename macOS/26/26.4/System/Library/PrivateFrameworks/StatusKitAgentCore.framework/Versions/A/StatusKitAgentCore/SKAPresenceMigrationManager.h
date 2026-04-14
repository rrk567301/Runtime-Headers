@class NSString, SKAPresenceChannel, SKAPresenceProfile, NSError;
@protocol SKAClientConnectionRepresentable;

@interface SKAPresenceMigrationManager : NSObject <SKAPresenceMigrationManaging> {
    void /* unknown type, empty encoding */ presenceManager;
    void /* unknown type, empty encoding */ subscriptionManager;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithPresenceManager:(id)a0 subscriptionManager:(id)a1;
- (void)rollChannelForPresenceIdentifier:(NSString *)a0 fromChannel:(SKAPresenceChannel *)a1 toChannel:(SKAPresenceChannel *)a2 profile:(SKAPresenceProfile *)a3 client:(id<SKAClientConnectionRepresentable>)a4 completion:(void (^)(NSError *))a5;

@end
