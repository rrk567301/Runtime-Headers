@class NSDictionary, AMSPromise;

@interface SHRematchBagConfiguration : NSObject

@property (retain) NSDictionary *configuration;
@property (retain) AMSPromise *amsPromise;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)initWithPromise:(id)a0;
- (BOOL)isEnabledForClientIdentifier:(id)a0;

@end
