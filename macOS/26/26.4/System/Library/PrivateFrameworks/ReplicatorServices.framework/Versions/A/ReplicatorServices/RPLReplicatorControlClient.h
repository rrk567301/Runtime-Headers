@class NSArray, _TtC18ReplicatorServices33ReplicatorControlClientObjcBridge;

@interface RPLReplicatorControlClient : NSObject {
    _TtC18ReplicatorServices33ReplicatorControlClientObjcBridge *_controlClient;
}

@property (readonly, copy, nonatomic) NSArray *devices;
@property (nonatomic) BOOL isReplicatorEnabled;
@property (readonly, nonatomic) BOOL isAllowListEnabled;
@property (readonly, copy, nonatomic) NSArray *allowList;

- (void).cxx_destruct;
- (id)init;
- (void)setAllowList:(id)a0;
- (id)pushTokenForRelationshipID:(id)a0;

@end
