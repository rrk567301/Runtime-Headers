@class ISResourceProvider;

@interface ISPlaceholderIcon : ISConcreteIcon

@property (readonly) ISResourceProvider *resourceProvider;

+ (id)sharedInstance;
+ (BOOL)supportsSecureCoding;

- (id)makeResourceProvider;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
