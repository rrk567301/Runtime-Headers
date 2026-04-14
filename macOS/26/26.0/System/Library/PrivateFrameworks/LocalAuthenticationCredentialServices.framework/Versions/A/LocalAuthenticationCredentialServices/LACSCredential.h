@class LACSPassword, NSUUID;

@interface LACSCredential : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LACSPassword *password;
@property (readonly, nonatomic) NSUUID *uuid;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)contextRef;
- (id)initWithUUID:(id)a0 password:(id)a1;

@end
