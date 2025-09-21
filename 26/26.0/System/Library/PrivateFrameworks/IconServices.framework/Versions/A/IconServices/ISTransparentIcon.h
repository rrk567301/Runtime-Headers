@class ISResourceProvider;

@interface ISTransparentIcon : ISConcreteIcon {
    ISResourceProvider *_resourceProvider;
}

+ (id)sharedInstance;
+ (BOOL)supportsSecureCoding;

- (id)makeResourceProvider;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
