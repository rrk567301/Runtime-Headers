@class NSString, NSArray, NSImage, NSDate;

@interface SVCCertificate : SVCObject

@property (copy) NSString *certificateIconName;
@property int certificateStatus;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSArray *emailAddresses;
@property (readonly, copy) NSString *issuer;
@property (readonly, copy) NSString *serialNumber;
@property (readonly, copy) NSDate *firstValidDate;
@property (readonly, copy) NSDate *expirationDate;
@property (readonly) BOOL isRootCertificate;
@property (readonly) BOOL isAuthorityCertificate;
@property (readonly, getter=isExpired) BOOL expired;
@property (readonly, nonatomic) NSImage *icon;

- (void).cxx_destruct;
- (id)initWithSecCertificateRef:(struct __SecCertificate { } *)a0;

@end
