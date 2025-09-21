@class NSUUID, NSData;

@interface HMFaceprint : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSData *data;
@property (readonly, copy) NSUUID *modelUUID;
@property (readonly, copy) NSUUID *faceCropUUID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 data:(id)a1 modelUUID:(id)a2 faceCropUUID:(id)a3;

@end
