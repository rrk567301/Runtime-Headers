@class NSData, HMDAccountHandle;

@interface _HMDGlobalDeviceHandle : _HMDDeviceHandle

@property (readonly, copy) HMDAccountHandle *accountHandle;
@property (readonly, copy, nonatomic) NSData *pushToken;

+ (BOOL)isValidDestination:(id)a0;
+ (BOOL)supportsSecureCoding;

- (id)initWithDestination:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)privateDescription;
- (BOOL)isGlobal;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)destination;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPushToken:(id)a0 accountHandle:(id)a1;

@end
