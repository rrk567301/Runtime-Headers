@class NSUUID, LAUserPassword;

@interface LAUserCredential : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ properties;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) LAUserPassword *password;
@property (nonatomic, readonly) NSUUID *uuid;

+ (id)installUserCredentialWithPassword:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 password:(id)a1;

@end
