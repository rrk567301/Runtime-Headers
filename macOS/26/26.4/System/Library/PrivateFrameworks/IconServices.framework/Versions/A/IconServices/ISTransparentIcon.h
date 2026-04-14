@class ISResourceProvider;

@interface ISTransparentIcon : ISConcreteIcon {
    ISResourceProvider *_resourceProvider;
}

+ (id)sharedInstance;
+ (BOOL)supportsSecureCoding;

- (id)makeResourceProvider;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
