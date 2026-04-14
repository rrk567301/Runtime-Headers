@class NSString;

@interface FPXPCSanitizer : NSObject

@property (readonly, nonatomic) NSString *providerIdentifier;

+ (id)permittedErrorDomains;

- (id)initWithProviderDomainIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
