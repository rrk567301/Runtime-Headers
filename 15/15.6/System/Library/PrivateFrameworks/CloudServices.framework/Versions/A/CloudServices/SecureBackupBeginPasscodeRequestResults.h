@class NSString, NSData;

@interface SecureBackupBeginPasscodeRequestResults : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSString *iCloudEnvironment;
@property (readonly) NSString *escrowFederation;
@property (readonly) NSData *cert;
@property (readonly) NSString *dsid;
@property (readonly) NSString *uuid;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStoredCertificate:(id)a0 uuid:(id)a1;

@end
