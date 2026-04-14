@class _HMDDeviceHandle, NSString, HMDAccountHandle, NSData, NSUUID;

@interface HMDDeviceHandle : HMFObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) _HMDDeviceHandle *internal;
@property (readonly, copy) HMDAccountHandle *accountHandle;
@property (readonly, copy) NSString *destination;
@property (readonly, copy) NSData *pushToken;
@property (readonly, getter=isLocal) BOOL local;
@property (readonly, getter=isGlobal) BOOL global;
@property (readonly, copy) NSUUID *identifier;

+ (id)deviceHandleForDeviceIdentifier:(id)a0;
+ (id)deviceHandleForDestination:(id)a0;

- (BOOL)matchesPushToken:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)shortDescription;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithInternal:(id)a0;
- (id)initWithCoder:(id)a0;

@end
