@class ISResourceProvider;

@interface ISPlaceholderIcon : ISConcreteIcon

@property (readonly) ISResourceProvider *resourceProvider;

+ (id)sharedInstance;
+ (BOOL)supportsSecureCoding;

- (id)makeResourceProvider;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
