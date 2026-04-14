@class NSDictionary, HMDAccountHandle;

@interface HMDRemoteAccountMessageDestination : HMDRemoteMessageDestination

@property (readonly, copy) HMDAccountHandle *handle;
@property (readonly, getter=isMulticast) BOOL multicast;
@property BOOL restrictToResidentCapable;
@property (readonly, copy) NSDictionary *deviceCapabilities;

+ (id)shortDescription;

- (id)initWithTarget:(id)a0;
- (unsigned long long)hash;
- (id)shortDescription;
- (id)privateDescription;
- (id)initWithTarget:(id)a0 handle:(id)a1 multicast:(BOOL)a2 deviceCapabilities:(id)a3;
- (id)description;
- (id)remoteDestinationString;
- (id)initWithTarget:(id)a0 handle:(id)a1 multicast:(BOOL)a2;
- (void).cxx_destruct;
- (id)descriptionWithPointer:(BOOL)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;

@end
