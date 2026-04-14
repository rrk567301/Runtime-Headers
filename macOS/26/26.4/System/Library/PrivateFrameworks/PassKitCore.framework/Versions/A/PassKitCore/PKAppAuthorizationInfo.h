@class NSString, NSMutableDictionary;

@interface PKAppAuthorizationInfo : NSObject {
    NSMutableDictionary *_passLibraryAuthorizations;
}

@property (copy, nonatomic) NSString *bundleIdentifier;

- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (long long)authorizationStatusForCapability:(long long)a0;
- (void)setAuthorizationStatus:(long long)a0 forCapability:(long long)a1;

@end
