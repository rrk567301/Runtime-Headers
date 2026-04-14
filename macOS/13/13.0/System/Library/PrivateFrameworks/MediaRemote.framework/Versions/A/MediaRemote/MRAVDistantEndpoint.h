@class NSXPCListenerEndpoint, NSArray, MRAVDistantOutputDevice, NSString, MRDistantExternalDevice, NSObject;
@protocol OS_dispatch_queue;

@interface MRAVDistantEndpoint : MRAVEndpoint <NSSecureCoding> {
    BOOL _canModifyGroupMembership;
    long long _connectionType;
    NSString *_localizedName;
    NSString *_uniqueIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *externalDeviceQueue;
@property (copy, nonatomic) NSArray *distantOutputDevices;
@property (copy, nonatomic) NSArray *distantPersonalOutputDevices;
@property (retain, nonatomic) MRAVDistantOutputDevice *distantGroupLeader;
@property (retain, nonatomic) MRDistantExternalDevice *distantExternalDevice;
@property (retain, nonatomic) NSXPCListenerEndpoint *externalDeviceListenerEndpoint;

- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (id)localizedName;
- (long long)connectionType;
- (void)setUniqueIdentifier:(id)a0;
- (id)initWithDescriptor:(id)a0;
- (void)setLocalizedName:(id)a0;
- (id)outputDevices;
- (id)externalDevice;
- (BOOL)isProxyGroupPlayer;
- (id)designatedGroupLeader;
- (BOOL)canModifyGroupMembership;
- (id)personalOutputDevices;
- (id)_externalOutputContext;
- (void)_handleConnectionStateDidChangeNotification:(id)a0;

@end
