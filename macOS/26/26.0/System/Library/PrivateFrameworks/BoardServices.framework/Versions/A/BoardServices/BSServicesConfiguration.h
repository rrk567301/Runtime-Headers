@class NSSet, NSString, NSDictionary, NSOrderedSet;

@interface BSServicesConfiguration : NSObject <BSDescriptionProviding> {
    NSDictionary *_domainsByIdentifier;
    NSDictionary *_disabledDomainsByIdentifier;
    NSOrderedSet *_orderedDomains;
}

@property (readonly, copy, nonatomic) NSSet *domains;
@property (readonly, copy, nonatomic) NSSet *disabledDomains;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extendAutomaticBootstrapCompletion;
+ (id)activateManualDomain:(id)a0;
+ (id)bootstrapConfiguration;
+ (void)registerViewServiceConfiguration;
+ (id)defaultConfiguration;
+ (id)registerDynamicDomainsFromPlist:(id)a0;
+ (void)activateViewServiceConfiguration;
+ (void)activateXPCService;
+ (id)viewServiceConfiguration;

- (id)domainForMachName:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)init;
- (id)domainForIdentifier:(id)a0;
- (id)succinctDescription;
- (id)domainsContainingServiceIdentifier:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void).cxx_destruct;

@end
