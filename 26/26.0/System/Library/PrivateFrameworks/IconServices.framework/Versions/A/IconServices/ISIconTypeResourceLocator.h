@class NSString;

@interface ISIconTypeResourceLocator : ISIconResourceLocator <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *type;

- (id)bundleIdentifier;
- (id)initWithType:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)allowLocalizedIcon;
- (id)preferedResourceName;
- (id)resourceDirectoryURL;

@end
