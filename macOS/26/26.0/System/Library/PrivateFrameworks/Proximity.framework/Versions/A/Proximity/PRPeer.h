@class NSUUID;

@interface PRPeer : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSUUID *uuid;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUUID:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
