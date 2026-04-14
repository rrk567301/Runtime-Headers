@class NSDictionary, HMDAccountHandle;

@interface HMDRemoteAccountMessageDestination : HMDRemoteMessageDestination

@property (readonly, copy) HMDAccountHandle *handle;
@property (readonly, getter=isMulticast) BOOL multicast;
@property BOOL restrictToResidentCapable;
@property (readonly, copy) NSDictionary *deviceCapabilities;

+ (id)shortDescription;

- (id)remoteDestinationString;
- (id)privateDescription;
- (id)initWithTarget:(id)a0;
- (id)shortDescription;
- (id)debugDescription;
- (id)descriptionWithPointer:(BOOL)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 handle:(id)a1 multicast:(BOOL)a2;
- (BOOL)isEqual:(id)a0;
- (id)initWithTarget:(id)a0 handle:(id)a1 multicast:(BOOL)a2 deviceCapabilities:(id)a3;
- (unsigned long long)hash;

@end
