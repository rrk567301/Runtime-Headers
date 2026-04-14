@class NSXPCListenerEndpoint, NSArray, MRAVDistantOutputDevice, MRAVDistantExternalDeviceFactory, MRDistantExternalDevice, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MRAVDistantEndpoint : MRAVEndpoint <NSSecureCoding> {
    BOOL _canModifyGroupMembership;
    long long _connectionType;
    NSString *_localizedName;
    NSString *_uniqueIdentifier;
}

@property (class, readonly, nonatomic) MRAVDistantExternalDeviceFactory *externalDeviceFactory;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *externalDeviceQueue;
@property (copy, nonatomic) NSArray *distantOutputDevices;
@property (copy, nonatomic) NSArray *distantPersonalOutputDevices;
@property (retain, nonatomic) MRAVDistantOutputDevice *distantGroupLeader;
@property (retain, nonatomic) MRDistantExternalDevice *distantExternalDevice;
@property (retain, nonatomic) NSXPCListenerEndpoint *externalDeviceListenerEndpoint;

- (BOOL)isEligibleForHostingGroupSessionExcludingAcknowledgements;
- (void)setLocalizedName:(id)a0;
- (BOOL)canModifyGroupMembership;
- (void)_handleDeviceInfoDidChangeNotification:(id)a0;
- (id)groupSessionInfo;
- (id)outputDevices;
- (id)personalOutputDevices;
- (void)setUniqueIdentifier:(id)a0;
- (long long)connectionType;
- (id)externalDevice;
- (id)designatedGroupLeader;
- (id)uniqueIdentifier;
- (BOOL)isConnected;
- (void)encodeWithCoder:(id)a0;
- (id)localizedName;
- (id)initWithDescriptor:(id)a0;
- (void)dealloc;
- (id)initWithDescriptor:(id)a0 xpcEndpointListener:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)_handleConnectionStateDidChangeNotification:(id)a0;

@end
