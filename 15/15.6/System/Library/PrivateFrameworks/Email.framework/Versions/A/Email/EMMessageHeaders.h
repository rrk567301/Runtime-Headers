@class NSDictionary, NSArray;

@interface EMMessageHeaders : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *headers;
@property (readonly, copy, nonatomic) NSArray *headerKeys;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithHeaders:(id)a0;
- (id)firstHeaderForKey:(id)a0;
- (id)headersForKey:(id)a0;

@end
