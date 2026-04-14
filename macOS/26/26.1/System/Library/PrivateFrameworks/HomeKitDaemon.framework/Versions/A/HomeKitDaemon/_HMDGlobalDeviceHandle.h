@class NSData, HMDAccountHandle;

@interface _HMDGlobalDeviceHandle : _HMDDeviceHandle

@property (readonly, copy) HMDAccountHandle *accountHandle;
@property (readonly, copy, nonatomic) NSData *pushToken;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isValidDestination:(id)a0;

- (id)initWithDestination:(id)a0;
- (unsigned long long)hash;
- (BOOL)isGlobal;
- (id)privateDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)destination;
- (BOOL)isEqual:(id)a0;
- (id)initWithPushToken:(id)a0 accountHandle:(id)a1;

@end
