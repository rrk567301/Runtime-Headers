@class ISResourceProvider;

@interface ISPlaceholderIcon : ISConcreteIcon

@property (readonly) ISResourceProvider *resourceProvider;

+ (id)sharedInstance;
+ (BOOL)supportsSecureCoding;

- (id)makeResourceProvider;
- (void).cxx_destruct;
- (id)init;
- (id)imageForDescriptor:(id)a0;
- (id)initWithCoder:(id)a0;

@end
