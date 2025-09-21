@class NSDictionary;

@interface CTSubscriberAuthDataHolder : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *dict;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)data;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;

@end
