@class NSData, NSUUID;

@interface FSEntityIdentifier : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *uuidData;
@property (copy) NSUUID *uuid;
@property (copy) NSData *qualifier;

+ (id)defaultInstanceUUID;

- (id)initWithUUID:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (id)initWithUUID:(id)a0 data:(id)a1;
- (id)initWithCopiedUUID:(id)a0 data:(id)a1;
- (id)initWithUUID:(id)a0 qualifier:(unsigned long long)a1;

@end
