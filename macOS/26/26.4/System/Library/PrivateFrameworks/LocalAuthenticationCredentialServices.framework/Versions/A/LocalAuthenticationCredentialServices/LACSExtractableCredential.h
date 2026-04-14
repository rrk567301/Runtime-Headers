@class NSUUID, LACSExtractablePassword;

@interface LACSExtractableCredential : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ uuidBytes;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) LACSExtractablePassword *password;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)contextRef;
- (id)initWithUUID:(id)a0 password:(id)a1 error:(id *)a2;
- (id)secureCopy;

@end
