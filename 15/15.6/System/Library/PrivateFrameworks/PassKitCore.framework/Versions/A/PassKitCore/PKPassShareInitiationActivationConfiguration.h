@class PKPassShareActivationOptions;

@interface PKPassShareInitiationActivationConfiguration : NSObject

@property (retain, nonatomic) PKPassShareActivationOptions *defaultOptions;
@property (retain, nonatomic) PKPassShareActivationOptions *availableOptions;
@property (nonatomic) char allowUserEdit;
@property (nonatomic) char isBlocked;

- (id)description;
- (void).cxx_destruct;

@end
