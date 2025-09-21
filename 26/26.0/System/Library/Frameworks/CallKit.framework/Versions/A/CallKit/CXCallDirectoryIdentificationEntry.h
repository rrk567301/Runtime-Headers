@class NSString, NSURL;

@interface CXCallDirectoryIdentificationEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *extensionIdentifier;
@property (copy, nonatomic) NSString *localizedExtensionName;
@property (copy, nonatomic) NSString *localizedExtensionContainingAppName;
@property (copy, nonatomic) NSString *localizedLabel;
@property (copy, nonatomic) NSURL *iconURL;
@property (nonatomic) long long type;
@property (nonatomic) BOOL fromCache;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
