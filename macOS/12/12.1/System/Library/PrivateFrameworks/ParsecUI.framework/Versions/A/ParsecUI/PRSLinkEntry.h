@class NSString, NSURL;

@interface PRSLinkEntry : NSObject

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSURL *url;

+ (BOOL)supportsSecureCoding;

- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (long long)type;
- (id)initWithText:(id)a0 url:(id)a1;

@end
