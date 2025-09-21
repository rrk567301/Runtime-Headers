@class NSArray;

@interface CRKCertificatesRequestResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic, getter=isValidRequest) char validRequest;
@property (readonly, copy, nonatomic) NSArray *certificateDataCollection;

+ (id)invalidResult;
+ (id)resultWithCertificateDataCollection:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToResult:(id)a0;
- (id)initWithIsValidRequest:(char)a0 certificateDataCollection:(id)a1;

@end
