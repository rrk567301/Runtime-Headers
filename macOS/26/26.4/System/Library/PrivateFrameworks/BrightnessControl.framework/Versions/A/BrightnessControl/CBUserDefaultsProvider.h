@class NSString;

@interface CBUserDefaultsProvider : CBDictConfigProvider {
    NSString *_desc;
}

+ (id)providerWithDomain:(id)a0;

- (id)initWithDomain:(id)a0;
- (id)description;
- (void)dealloc;

@end
