@class NSUUID, LACUserPassword;

@interface LACUserCredential : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ properties;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) LACUserPassword *password;
@property (nonatomic, readonly) NSUUID *uuid;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 password:(id)a1;

@end
