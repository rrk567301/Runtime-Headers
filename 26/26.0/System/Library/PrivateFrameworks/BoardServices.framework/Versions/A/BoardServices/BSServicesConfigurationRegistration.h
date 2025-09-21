@class BSServicesConfiguration, NSString;
@protocol BSInvalidatable;

@interface BSServicesConfigurationRegistration : NSObject <BSDescriptionProviding, BSInvalidatable> {
    id<BSInvalidatable> _registration;
}

@property (readonly, nonatomic) BSServicesConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void).cxx_destruct;

@end
