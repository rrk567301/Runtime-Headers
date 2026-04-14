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

+ (id)bootstrapConfiguration;
+ (id)defaultConfiguration;
+ (void)activateXPCService;
+ (void)registerViewServiceConfiguration;
+ (void)activateViewServiceConfiguration;
+ (id)extendAutomaticBootstrapCompletion;
+ (id)registerDynamicDomainsFromPlist:(id)a0;
+ (id)viewServiceConfiguration;
+ (id)activateManualDomain:(id)a0;

- (id)domainForIdentifier:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)domainsContainingServiceIdentifier:(id)a0;
- (id)succinctDescriptionBuilder;
- (void).cxx_destruct;
- (id)domainForMachName:(id)a0;
- (id)succinctDescription;
- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;

@end
