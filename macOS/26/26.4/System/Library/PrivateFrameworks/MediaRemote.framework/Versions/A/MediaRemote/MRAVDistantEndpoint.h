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

- (id)personalOutputDevices;
- (id)uniqueIdentifier;
- (void)_handleDeviceInfoDidChangeNotification:(id)a0;
- (void)_handleConnectionStateDidChangeNotification:(id)a0;
- (id)debugDescription;
- (void)setLocalizedName:(id)a0;
- (BOOL)canModifyGroupMembership;
- (id)initWithDescriptor:(id)a0;
- (long long)connectionType;
- (BOOL)isEligibleForHostingGroupSessionExcludingAcknowledgements;
- (id)groupSessionInfo;
- (void)setUniqueIdentifier:(id)a0;
- (id)initWithDescriptor:(id)a0 xpcEndpointListener:(id)a1;
- (id)externalDevice;
- (id)designatedGroupLeader;
- (BOOL)isConnected;
- (void)encodeWithCoder:(id)a0;
- (id)outputDevices;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)localizedName;

@end
