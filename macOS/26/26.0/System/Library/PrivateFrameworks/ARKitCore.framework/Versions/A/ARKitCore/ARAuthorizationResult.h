@class NSString;

@interface ARAuthorizationResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *authorizedType;
@property (readonly, nonatomic) unsigned long long authorizedStatus;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToResult:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(id)a0 status:(unsigned long long)a1;

@end
