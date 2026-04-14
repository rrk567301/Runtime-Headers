@class NSDate;

@interface ICAgeVerifier : NSObject <NSCopying>

@property (nonatomic) long long status;
@property (readonly, nonatomic, getter=isExplicitContentAllowed) BOOL explicitContentAllowed;
@property (readonly, nonatomic) NSDate *verificationExpirationDate;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithExpirationDate:(id)a0;
- (void)runAgeVerification;

@end
