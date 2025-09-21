@class NSString;

@interface TKTokenID : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSString *stringRepresentation;
@property (readonly) NSString *classID;
@property (readonly) NSString *instanceID;

+ (id)encodedCertificateID:(id)a0;
+ (id)encodedKeyID:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTokenID:(id)a0;
- (id)decodedCertificateID:(id)a0 error:(id *)a1;
- (id)decodedKeyID:(id)a0 error:(id *)a1;
- (id)decodedObjectID:(id)a0 isCertificate:(char *)a1 error:(id *)a2;
- (id)initWithClassID:(id)a0 instanceID:(id)a1;

@end
