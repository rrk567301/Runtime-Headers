@class NSString;

@interface ISIconTypeResourceLocator : ISIconResourceLocator <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *type;

- (id)initWithType:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)bundleIdentifier;
- (BOOL)allowLocalizedIcon;
- (id)preferedResourceName;
- (id)resourceDirectoryURL;

@end
