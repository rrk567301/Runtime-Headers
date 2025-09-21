@class NSString;

@interface ISIconTypeResourceLocator : ISIconResourceLocator <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSString *type;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)bundleIdentifier;
- (id)initWithType:(id)a0;
- (char)allowLocalizedIcon;
- (id)preferedResourceName;
- (id)resourceDirectoryURL;

@end
