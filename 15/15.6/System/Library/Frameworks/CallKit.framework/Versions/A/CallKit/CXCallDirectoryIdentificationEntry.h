@class NSString, NSURL;

@interface CXCallDirectoryIdentificationEntry : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *extensionIdentifier;
@property (copy, nonatomic) NSString *localizedExtensionName;
@property (copy, nonatomic) NSString *localizedExtensionContainingAppName;
@property (copy, nonatomic) NSString *localizedLabel;
@property (copy, nonatomic) NSURL *iconURL;
@property (nonatomic) long long type;
@property (nonatomic) char fromCache;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
