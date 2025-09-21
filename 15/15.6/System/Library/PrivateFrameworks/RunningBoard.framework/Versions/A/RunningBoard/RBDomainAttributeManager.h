@class NSString, NSDictionary;
@protocol RBDomainAttributeDataProviding;

@interface RBDomainAttributeManager : NSObject <RBDomainAttributeManaging, RBStateCapturing> {
    NSDictionary *_domainAttributeTemplatesByDomain;
    id<RBDomainAttributeDataProviding> _dataProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *stateCaptureTitle;

- (void).cxx_destruct;
- (id)captureState;
- (id)initWithDataProvider:(id)a0;
- (id)allEntitlements;
- (id)additionalRestrictionsForDomain:(id)a0 andName:(id)a1;
- (char)areTargetPropertiesValidForContext:(id)a0 forAttributeWithDomain:(id)a1 andName:(id)a2;
- (id)attributesForDomain:(id)a0 andName:(id)a1 context:(id)a2 withError:(id *)a3;
- (char)containsAttributeWithDomain:(id)a0 andName:(id)a1;
- (id)endowmentNamespaceForDomain:(id)a0 andName:(id)a1;
- (id)originatorEntitlementsForDomain:(id)a0 andName:(id)a1;
- (id)restrictionsForDomain:(id)a0 andName:(id)a1;
- (id)targetEntitlementsForDomain:(id)a0 andName:(id)a1;

@end
