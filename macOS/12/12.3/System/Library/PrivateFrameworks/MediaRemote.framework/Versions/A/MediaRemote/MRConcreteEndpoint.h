@class NSArray, NSString, MRExternalDevice, MRAVOutputDevice, NSObject;
@protocol OS_dispatch_queue;

@interface MRConcreteEndpoint : MRAVEndpoint {
    NSString *_uniqueIdentifier;
    NSArray *_outputDevices;
    MRExternalDevice *_externalDevice;
    MRAVOutputDevice *_designatedGroupLeader;
    long long _connectionType;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (copy, nonatomic) NSArray *outputDevices;

- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (long long)connectionType;
- (id)externalDevice;
- (void)setExternalDevice:(id)a0;
- (id)initWithDesignatedGroupLeader:(id)a0 outputDevices:(id)a1 preferredSuffix:(id)a2 connectionType:(long long)a3;
- (BOOL)isProxyGroupPlayer;
- (id)designatedGroupLeader;
- (id)initWithDesignatedGroupLeader:(id)a0 outputDevices:(id)a1 preferredSuffix:(id)a2;
- (BOOL)canModifyGroupMembership;

@end
