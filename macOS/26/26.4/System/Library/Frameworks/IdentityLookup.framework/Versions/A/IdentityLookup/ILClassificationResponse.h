@class NSString, NSDictionary;

@interface ILClassificationResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long action;
@property (copy, nonatomic) NSString *userString;
@property (copy, nonatomic) NSDictionary *userInfo;

- (BOOL)isEqualToResponse:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithClassificationAction:(long long)a0;

@end
