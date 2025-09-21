@class NSString;

@interface CP_DDMAppInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *personaIdentifier;
@property (copy, nonatomic) NSString *sourceIdentifier;
@property (copy, nonatomic) NSString *declarationIdentifier;
@property (copy, nonatomic) NSString *appPath;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
