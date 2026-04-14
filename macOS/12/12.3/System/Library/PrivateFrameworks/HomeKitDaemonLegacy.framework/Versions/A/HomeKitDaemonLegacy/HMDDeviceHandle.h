@class NSString, NSUUID, NSData, HMDAccountHandle, _HMDDeviceHandle;

@interface HMDDeviceHandle : HMFObject <NSCopying, NSSecureCoding> {
    _HMDDeviceHandle *_internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) HMDAccountHandle *accountHandle;
@property (readonly, copy) NSString *destination;
@property (readonly, copy) NSData *pushToken;
@property (readonly, getter=isLocal) BOOL local;
@property (readonly, getter=isGlobal) BOOL global;
@property (readonly, copy) NSUUID *identifier;

+ (id)deviceHandleForDestination:(id)a0;
+ (id)deviceHandleForDeviceIdentifier:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)shortDescription;
- (id)initWithInternal:(id)a0;
- (id)attributeDescriptions;
- (BOOL)matchesPushToken:(id)a0;

@end
