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
- (long long)connectionType;
- (id)uniqueIdentifier;
- (char)isConnected;
- (void)_handleConnectionStateDidChangeNotification:(id)a0;
- (char)canModifyGroupMembership;
- (id)designatedGroupLeader;
- (id)externalDevice;
- (id)initWithDesignatedGroupLeader:(id)a0 outputDevices:(id)a1 preferredSuffix:(id)a2;
- (id)initWithDesignatedGroupLeader:(id)a0 outputDevices:(id)a1 preferredSuffix:(id)a2 connectionType:(long long)a3;
- (char)isProxyGroupPlayer;
- (void)setExternalDevice:(id)a0;

@end
