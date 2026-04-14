@class ISResourceProvider;

@interface ISTransparentIcon : ISConcreteIcon {
    ISResourceProvider *_resourceProvider;
}

+ (BOOL)supportsSecureCoding;
+ (id)sharedInstance;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)makeResourceProvider;

@end
