@class HMDDevice, NSString;

@interface HMDResidentUser : HMDUser {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _residentUserLock;
}

@property unsigned long long configurationState;
@property unsigned long long configurationState;
@property (readonly) HMDDevice *device;
@property (readonly, getter=isBlocked) char blocked;
@property (readonly, copy) NSString *deviceIdentifier;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)displayName;
- (id)userID;
- (void)setDevice:(id)a0;
- (id)initWithModelObject:(id)a0;
- (void)configureWithHome:(id)a0;
- (id)encodingRemoteDisplayName;
- (id)initWithDevice:(id)a0 home:(id)a1 pairingIdentity:(id)a2 configurationState:(unsigned long long)a3;
- (id)legacyUser;
- (id)modelObjectWithChangeType:(unsigned long long)a0 version:(long long)a1;
- (char)refreshDisplayName;
- (void)registerIdentity;
- (char)requiresMakoSupport;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (char)updateWithDevice:(id)a0;

@end
