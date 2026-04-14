@class NSURL, NSData, NSDictionary;

@interface AKAttestationRequestData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *requestURL;
@property (readonly, nonatomic) NSData *bodyDataHash;
@property (readonly, nonatomic) NSDictionary *headers;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRequest:(id)a0 requiredHeaders:(id)a1;

@end
