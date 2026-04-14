@class NSURL, NSString;

@interface EMListUnsubscribePostValues : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *oneClickURL;
@property (readonly, nonatomic) NSString *postContent;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 postContent:(id)a1;

@end
