@class NSString, NSDictionary;

@interface ILClassificationResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long action;
@property (copy, nonatomic) NSString *userString;
@property (copy, nonatomic) NSDictionary *userInfo;

- (id)description;
- (BOOL)isEqualToResponse:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithClassificationAction:(long long)a0;

@end
