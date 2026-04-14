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

+ (id)registerDynamicDomainsFromPlist:(id)a0;
+ (id)defaultConfiguration;
+ (id)extendAutomaticBootstrapCompletion;
+ (id)bootstrapConfiguration;
+ (id)viewServiceConfiguration;
+ (void)registerViewServiceConfiguration;
+ (id)activateManualDomain:(id)a0;
+ (void)activateViewServiceConfiguration;
+ (void)activateXPCService;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void).cxx_destruct;
- (id)domainForIdentifier:(id)a0;
- (id)init;
- (id)domainsContainingServiceIdentifier:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)domainForMachName:(id)a0;
- (id)succinctDescription;

@end
