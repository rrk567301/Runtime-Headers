@class NSDictionary;

@interface MCMEntitlementBypassList : NSObject {
    NSDictionary *_bypassListedLookupByCodeSignIdentifier;
}

@property (retain, nonatomic) NSDictionary *systemEntitlementBypassList;
@property (retain, nonatomic) NSDictionary *systemGroupEntitlementBypassList;

+ (id)sharedBypassList;

- (BOOL)isLookupAllowedToBypassEntitlementFromCodeSignIdentifier:(id)a0 forContainerClass:(unsigned long long)a1 containerIdentifier:(id)a2;
- (id)wellknownSystemContainers;
- (BOOL)systemContainerIdIsWellknown:(id)a0;
- (id)wellknownContainerForId:(id)a0 class:(unsigned long long)a1;
- (id)wellknownSystemGroupContainerForId:(id)a0;
- (BOOL)systemGroupContainerIdIsWellknown:(id)a0;
- (id)wellknownSystemGroupContainers;
- (void).cxx_destruct;
- (BOOL)containerIdIsWellknown:(id)a0 class:(unsigned long long)a1;
- (id)wellknownSystemContainerForId:(id)a0;
- (id)initWithSystemContainerMapping:(id)a0 systemGroupContainerMapping:(id)a1 bypassListedCodeSignIdentifierMapping:(id)a2;
- (id)_convertArraysToSetsInNestedDictionary:(id)a0;
- (id)wellKnownContainerIdentifiersForSandboxPushDownCompatibilitySet;

@end
