@class NSData, HMDAccountHandle;

@interface _HMDGlobalDeviceHandle : _HMDDeviceHandle

@property (readonly, copy) HMDAccountHandle *accountHandle;
@property (readonly, copy, nonatomic) NSData *pushToken;

+ (char)supportsSecureCoding;
+ (char)isValidDestination:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)destination;
- (char)isGlobal;
- (id)privateDescription;
- (id)initWithDestination:(id)a0;
- (id)initWithPushToken:(id)a0 accountHandle:(id)a1;

@end
