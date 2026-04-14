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

+ (void)registerViewServiceConfiguration;
+ (id)viewServiceConfiguration;
+ (id)defaultConfiguration;
+ (id)activateManualDomain:(id)a0;
+ (id)registerDynamicDomainsFromPlist:(id)a0;
+ (void)activateViewServiceConfiguration;
+ (id)bootstrapConfiguration;
+ (void)activateXPCService;
+ (id)extendAutomaticBootstrapCompletion;

- (id)succinctDescriptionBuilder;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)domainsContainingServiceIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)domainForIdentifier:(id)a0;
- (id)domainForMachName:(id)a0;

@end
