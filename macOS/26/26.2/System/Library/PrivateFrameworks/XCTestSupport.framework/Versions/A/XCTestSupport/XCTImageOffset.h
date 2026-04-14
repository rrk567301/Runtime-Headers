@class NSUUID;

@interface XCTImageOffset : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *uuid;
@property unsigned int offset;

- (id)initWithUUID:(id)a0 offset:(unsigned int)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
