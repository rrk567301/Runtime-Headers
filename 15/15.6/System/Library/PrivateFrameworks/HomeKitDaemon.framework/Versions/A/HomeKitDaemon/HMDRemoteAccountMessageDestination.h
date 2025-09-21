@class NSDictionary, HMDAccountHandle;

@interface HMDRemoteAccountMessageDestination : HMDRemoteMessageDestination

@property (readonly, copy) HMDAccountHandle *handle;
@property (readonly, getter=isMulticast) char multicast;
@property char restrictToResidentCapable;
@property (readonly, copy) NSDictionary *deviceCapabilities;

+ (id)shortDescription;

- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0;
- (id)shortDescription;
- (id)privateDescription;
- (id)descriptionWithPointer:(char)a0;
- (id)initWithTarget:(id)a0 handle:(id)a1 multicast:(char)a2;
- (id)initWithTarget:(id)a0 handle:(id)a1 multicast:(char)a2 deviceCapabilities:(id)a3;
- (id)remoteDestinationString;

@end
