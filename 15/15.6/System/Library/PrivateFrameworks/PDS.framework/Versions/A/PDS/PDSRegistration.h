@class NSString;

@interface PDSRegistration : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *topicString;
@property (readonly, nonatomic) NSString *qualifierString;
@property (readonly, nonatomic) char pushEnvironment;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTopic:(id)a0 pushEnvironment:(char)a1;
- (id)initWithTopic:(id)a0 qualifier:(id)a1 pushEnvironment:(char)a2;
- (char)isEqualToRegistration:(id)a0;

@end
