@class NSDictionary, HMDAccountHandle;

@interface HMDRemoteAccountHandleMessageDestination : HMDRemoteMessageDestination

@property (readonly, copy) HMDAccountHandle *handle;
@property (readonly, getter=isMulticast) BOOL multicast;
@property (readonly, copy) NSDictionary *deviceCapabilities;

+ (id)shortDescription;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0;
- (id)shortDescription;
- (id)descriptionWithPointer:(BOOL)a0;
- (id)remoteDestinationString;
- (id)initWithTarget:(id)a0 handle:(id)a1 multicast:(BOOL)a2;
- (id)initWithTarget:(id)a0 handle:(id)a1 multicast:(BOOL)a2 deviceCapabilities:(id)a3;

@end
