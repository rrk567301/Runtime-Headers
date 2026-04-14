@class NSUUID, NSNumber;

@interface PRBeaconDescriptor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *UUID;
@property (readonly) NSNumber *major;
@property (readonly) NSNumber *minor;
@property unsigned long long macAddress;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0;
- (id)initWithUUID:(id)a0 major:(unsigned short)a1;
- (id)initWithUUID:(id)a0 major:(unsigned short)a1 minor:(unsigned short)a2;
- (id)_initWithUUID:(id)a0 major:(id)a1 minor:(id)a2;

@end
