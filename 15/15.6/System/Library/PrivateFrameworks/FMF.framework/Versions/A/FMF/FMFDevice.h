@class NSString;

@interface FMFDevice : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSString *deviceId;
@property (copy) NSString *deviceName;
@property char isActiveDevice;
@property char isThisDevice;
@property char isCompanionDevice;
@property char isAutoMeCapable;
@property (copy) NSString *idsDeviceId;

+ (id)deviceWithId:(id)a0 name:(id)a1 idsDeviceId:(id)a2 isActive:(char)a3 isThisDevice:(char)a4 isCompanionDevice:(char)a5 isAutoMeCapable:(char)a6;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)updateIsActive:(char)a0 isThisDevice:(char)a1;

@end
