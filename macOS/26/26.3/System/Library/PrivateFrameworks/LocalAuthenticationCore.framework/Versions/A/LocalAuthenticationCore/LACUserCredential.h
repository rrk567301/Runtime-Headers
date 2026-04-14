@class NSUUID, LACUserPassword;

@interface LACUserCredential : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ properties;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) LACUserPassword *password;
@property (nonatomic, readonly) NSUUID *uuid;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithUUID:(id)a0 password:(id)a1;

@end
