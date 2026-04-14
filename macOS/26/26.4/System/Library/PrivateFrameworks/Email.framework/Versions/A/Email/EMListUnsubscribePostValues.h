@class NSURL, NSString;

@interface EMListUnsubscribePostValues : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *oneClickURL;
@property (readonly, nonatomic) NSString *postContent;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 postContent:(id)a1;

@end
