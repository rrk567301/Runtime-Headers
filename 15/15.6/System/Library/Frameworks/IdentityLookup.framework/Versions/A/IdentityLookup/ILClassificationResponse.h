@class NSString, NSDictionary;

@interface ILClassificationResponse : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long action;
@property (copy, nonatomic) NSString *userString;
@property (copy, nonatomic) NSDictionary *userInfo;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToResponse:(id)a0;
- (id)initWithClassificationAction:(long long)a0;

@end
