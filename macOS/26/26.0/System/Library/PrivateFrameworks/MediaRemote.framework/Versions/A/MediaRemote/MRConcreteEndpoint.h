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

- (void)_handleDeviceInfoDidChangeNotification:(id)a0;
- (id)designatedGroupLeader;
- (BOOL)canModifyGroupMembership;
- (id)externalDevice;
- (void)_handleConnectionStateDidChangeNotification:(id)a0;
- (void)setExternalDevice:(id)a0;
- (long long)connectionType;
- (id)uniqueIdentifier;
- (void).cxx_destruct;
- (id)initWithDesignatedGroupLeader:(id)a0 outputDevices:(id)a1 preferredSuffix:(id)a2;
- (id)initWithDesignatedGroupLeader:(id)a0 outputDevices:(id)a1 preferredSuffix:(id)a2 connectionType:(long long)a3;

@end
