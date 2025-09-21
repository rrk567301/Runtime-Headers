@class NSUUID, LACSSecurePassword;

@interface LARecoveryCredential : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ properties;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) LACSSecurePassword *password;
@property (nonatomic, readonly) NSUUID *uuid;

+ (id)iCloudRecoveryCredentialWithPassword:(id)a0;
+ (id)installerRecoveryCredentialWithPassword:(id)a0;
+ (id)institutionalRecoveryCredentialWithPassword:(id)a0;
+ (id)mdmRecoveryCredentialWithPassword:(id)a0;
+ (id)personalRecoveryCredentialWithPassword:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithUuid:(id)a0 password:(id)a1;

@end
