@class NSUUID, LACSSecurePassword, LACSCredential;

@interface LACSSecureCredential : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LACSCredential *credential;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) LACSSecurePassword *password;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCredential:(id)a0;
- (id)contextRef;
- (id)initWithCredential:(id)a0 password:(id)a1;
- (id)initWithUUID:(id)a0 password:(id)a1 error:(id *)a2;

@end
