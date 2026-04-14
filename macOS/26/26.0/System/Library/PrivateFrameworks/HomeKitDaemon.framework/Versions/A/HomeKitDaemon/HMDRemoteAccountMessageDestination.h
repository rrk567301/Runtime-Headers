@class NSDictionary, HMDAccountHandle;

@interface HMDRemoteAccountMessageDestination : HMDRemoteMessageDestination

@property (readonly, copy) HMDAccountHandle *handle;
@property (readonly, getter=isMulticast) BOOL multicast;
@property BOOL restrictToResidentCapable;
@property (readonly, copy) NSDictionary *deviceCapabilities;

+ (id)shortDescription;

- (id)privateDescription;
- (id)remoteDestinationString;
- (id)debugDescription;
- (id)initWithTarget:(id)a0;
- (id)descriptionWithPointer:(BOOL)a0;
- (id)initWithTarget:(id)a0 handle:(id)a1 multicast:(BOOL)a2 deviceCapabilities:(id)a3;
- (id)description;
- (id)initWithTarget:(id)a0 handle:(id)a1 multicast:(BOOL)a2;
- (unsigned long long)hash;
- (id)shortDescription;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
