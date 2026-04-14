@class NSString, NSData;

@interface SecureBackupBeginPasscodeRequestResults : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *iCloudEnvironment;
@property (readonly) NSString *escrowFederation;
@property (readonly) NSData *cert;
@property (readonly) NSString *dsid;
@property (readonly) NSString *uuid;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithStoredCertificate:(id)a0 uuid:(id)a1;

@end
