@class NSDictionary;

@interface MCMEntitlementBypassList : NSObject {
    NSDictionary *_bypassListedLookupByCodeSignIdentifier;
}

@property (retain, nonatomic) NSDictionary *systemEntitlementBypassList;
@property (retain, nonatomic) NSDictionary *systemGroupEntitlementBypassList;

+ (id)sharedBypassList;

- (id)wellknownSystemGroupContainers;
- (id)wellknownSystemContainerForId:(id)a0;
- (id)_convertArraysToSetsInNestedDictionary:(id)a0;
- (BOOL)systemGroupContainerIdIsWellknown:(id)a0;
- (id)wellknownContainerForId:(id)a0 class:(unsigned long long)a1;
- (BOOL)systemContainerIdIsWellknown:(id)a0;
- (void).cxx_destruct;
- (id)initWithSystemContainerMapping:(id)a0 systemGroupContainerMapping:(id)a1 bypassListedCodeSignIdentifierMapping:(id)a2;
- (BOOL)isLookupAllowedToBypassEntitlementFromCodeSignIdentifier:(id)a0 forContainerClass:(unsigned long long)a1 containerIdentifier:(id)a2;
- (id)wellknownSystemGroupContainerForId:(id)a0;
- (BOOL)containerIdIsWellknown:(id)a0 class:(unsigned long long)a1;
- (id)wellKnownContainerIdentifiersForSandboxPushDownCompatibilitySet;
- (id)wellknownSystemContainers;

@end
