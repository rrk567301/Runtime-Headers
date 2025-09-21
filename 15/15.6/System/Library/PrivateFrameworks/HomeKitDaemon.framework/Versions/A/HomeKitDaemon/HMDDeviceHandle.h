@class _HMDDeviceHandle, NSString, HMDAccountHandle, NSData, NSUUID;

@interface HMDDeviceHandle : HMFObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) _HMDDeviceHandle *internal;
@property (readonly, copy) HMDAccountHandle *accountHandle;
@property (readonly, copy) NSString *destination;
@property (readonly, copy) NSData *pushToken;
@property (readonly, getter=isLocal) char local;
@property (readonly, getter=isGlobal) char global;
@property (readonly, copy) NSUUID *identifier;

+ (id)deviceHandleForDestination:(id)a0;
+ (id)deviceHandleForDeviceIdentifier:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (id)initWithInternal:(id)a0;
- (id)attributeDescriptions;
- (char)matchesPushToken:(id)a0;

@end
