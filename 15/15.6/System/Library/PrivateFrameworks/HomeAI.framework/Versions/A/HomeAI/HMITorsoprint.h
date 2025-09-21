@class NSUUID, NSData;

@interface HMITorsoprint : HMFObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSData *data;
@property (readonly) char lowQuality;
@property (readonly) char unrecognizable;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)attributeDescriptions;
- (id)initWithUUID:(id)a0 data:(id)a1;
- (id)initWithUUID:(id)a0 data:(id)a1 lowQuality:(char)a2 unrecognizable:(char)a3;

@end
