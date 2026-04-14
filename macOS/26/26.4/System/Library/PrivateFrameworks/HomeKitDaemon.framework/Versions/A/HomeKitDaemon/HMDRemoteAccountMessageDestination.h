@class NSDictionary, HMDAccountHandle;

@interface HMDRemoteAccountMessageDestination : HMDRemoteMessageDestination

@property (readonly, copy) HMDAccountHandle *handle;
@property (readonly, getter=isMulticast) BOOL multicast;
@property BOOL restrictToResidentCapable;
@property (readonly, copy) NSDictionary *deviceCapabilities;

+ (id)shortDescription;

- (id)descriptionWithPointer:(BOOL)a0;
- (id)debugDescription;
- (id)privateDescription;
- (id)remoteDestinationString;
- (id)initWithTarget:(id)a0;
- (id)shortDescription;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 handle:(id)a1 multicast:(BOOL)a2 deviceCapabilities:(id)a3;
- (unsigned long long)hash;
- (id)initWithTarget:(id)a0 handle:(id)a1 multicast:(BOOL)a2;
- (id)description;

@end
