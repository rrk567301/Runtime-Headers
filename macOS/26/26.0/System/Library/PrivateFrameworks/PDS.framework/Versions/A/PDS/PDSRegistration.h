@class NSString;

@interface PDSRegistration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *topicString;
@property (readonly, nonatomic) NSString *qualifierString;
@property (readonly, nonatomic) char pushEnvironment;

- (void)encodeWithCoder:(id)a0;
- (id)initWithTopic:(id)a0 pushEnvironment:(char)a1;
- (id)initWithTopic:(id)a0 qualifier:(id)a1 pushEnvironment:(char)a2;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToRegistration:(id)a0;
- (void).cxx_destruct;

@end
