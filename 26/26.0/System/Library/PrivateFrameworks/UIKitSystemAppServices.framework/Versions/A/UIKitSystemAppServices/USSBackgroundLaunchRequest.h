@class NSString, NSDictionary;

@interface USSBackgroundLaunchRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *reasonString;
@property (retain, nonatomic) NSDictionary *reasonInformation;

+ (id)requestWithReason:(id)a0 information:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithReason:(id)a0 information:(id)a1;

@end
