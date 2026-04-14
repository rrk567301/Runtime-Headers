@class HMDAccount;

@interface HMDRemoteAccountMessageDestination : HMDRemoteAccountHandleMessageDestination

@property (readonly, nonatomic) HMDAccount *account;

+ (id)shortDescription;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)shortDescription;
- (id)privateDescription;
- (id)descriptionWithPointer:(BOOL)a0;
- (id)remoteDestinationString;
- (id)initWithTarget:(id)a0 handle:(id)a1 multicast:(BOOL)a2 deviceCapabilities:(id)a3;
- (id)initWithTarget:(id)a0 account:(id)a1 multicast:(BOOL)a2;
- (id)initWithTarget:(id)a0 account:(id)a1 multicast:(BOOL)a2 deviceCapabilities:(id)a3;

@end
