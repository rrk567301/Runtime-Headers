@class NSURL, NSDictionary;

@interface CRKResource : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSURL *hostedURL;
@property (nonatomic, getter=isZippedBundle) char zippedBundle;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithHostedURL:(id)a0 isZippedBundle:(char)a1;
- (char)isEqualToHostedResource:(id)a0;

@end
