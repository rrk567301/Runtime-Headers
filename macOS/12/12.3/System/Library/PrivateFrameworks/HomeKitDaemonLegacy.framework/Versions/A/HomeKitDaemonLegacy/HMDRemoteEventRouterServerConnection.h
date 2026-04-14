@class HMDDevice, NSString, NSUUID;
@protocol HMDRemoteEventRouterUserAccessControlProvider;

@interface HMDRemoteEventRouterServerConnection : NSObject <HMEMessageDatagramConnection> {
    BOOL _supportsFragmentMessage;
    NSUUID *_deviceIdentifier;
    id<HMDRemoteEventRouterUserAccessControlProvider> _userAccessControlProvider;
    long long _connectionMode;
}

@property (readonly, weak, nonatomic) HMDDevice *device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 connectionMode:(long long)a1 supportsFragmentMessage:(BOOL)a2 userAccessControlProvider:(id)a3;

@end
