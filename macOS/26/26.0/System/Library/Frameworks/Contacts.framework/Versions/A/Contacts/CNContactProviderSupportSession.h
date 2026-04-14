@class NSProgress, NSString, NSDictionary;

@interface CNContactProviderSupportSession : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSProgress *progress;
@property (copy, nonatomic) NSString *synchronizationReason;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSDictionary *userInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
