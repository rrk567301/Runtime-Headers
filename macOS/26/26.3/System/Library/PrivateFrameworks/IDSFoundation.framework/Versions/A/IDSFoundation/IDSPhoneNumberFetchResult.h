@class NSString;

@interface IDSPhoneNumberFetchResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *telURI;
@property (readonly, nonatomic) long long fetchType;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTelURI:(id)a0 fetchType:(long long)a1;

@end
