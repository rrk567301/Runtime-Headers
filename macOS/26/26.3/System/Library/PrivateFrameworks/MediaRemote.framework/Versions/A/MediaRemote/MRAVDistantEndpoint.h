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

- (id)initWithDescriptor:(id)a0;
- (id)uniqueIdentifier;
- (id)debugDescription;
- (id)groupSessionInfo;
- (id)personalOutputDevices;
- (id)designatedGroupLeader;
- (id)outputDevices;
- (void)_handleConnectionStateDidChangeNotification:(id)a0;
- (void)_handleDeviceInfoDidChangeNotification:(id)a0;
- (void)setLocalizedName:(id)a0;
- (BOOL)canModifyGroupMembership;
- (long long)connectionType;
- (BOOL)isEligibleForHostingGroupSessionExcludingAcknowledgements;
- (BOOL)isConnected;
- (id)externalDevice;
- (id)localizedName;
- (id)initWithDescriptor:(id)a0 xpcEndpointListener:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)setUniqueIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
