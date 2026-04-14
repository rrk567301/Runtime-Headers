@class HMDDevice, NSString;

@interface HMDResidentUser : HMDUser {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _residentUserLock;
}

@property unsigned long long configurationState;
@property unsigned long long configurationState;
@property (readonly) HMDDevice *device;
@property (readonly, getter=isBlocked) BOOL blocked;
@property (readonly, copy) NSString *deviceIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)modelObjectWithChangeType:(unsigned long long)a0 version:(long long)a1;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)setDevice:(id)a0;
- (id)displayName;
- (void)encodeWithCoder:(id)a0;
- (BOOL)updateWithDevice:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)userID;
- (id)initWithModelObject:(id)a0;
- (void)configureWithHome:(id)a0;
- (id)encodingRemoteDisplayName;
- (id)initWithDevice:(id)a0 home:(id)a1 pairingIdentity:(id)a2 configurationState:(unsigned long long)a3;
- (id)legacyUser;
- (BOOL)refreshDisplayName;
- (void)registerIdentity;
- (BOOL)requiresMakoSupport;

@end
