@class NSString;

@interface DMFEnableLostModeRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *footnote;

+ (id)permittedPlatforms;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
