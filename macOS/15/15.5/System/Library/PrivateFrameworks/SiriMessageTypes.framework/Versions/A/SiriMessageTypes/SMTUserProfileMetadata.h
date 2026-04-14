@class NSString;

@interface SMTUserProfileMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL headphoneConnected;
@property (copy, nonatomic) NSString *userProfileIdentifier;
@property (nonatomic) long long confidence;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
