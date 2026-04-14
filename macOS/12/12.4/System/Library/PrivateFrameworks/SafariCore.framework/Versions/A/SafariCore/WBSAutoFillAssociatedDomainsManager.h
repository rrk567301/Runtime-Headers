@class NSArray, NSMutableDictionary;

@interface WBSAutoFillAssociatedDomainsManager : NSObject {
    NSMutableDictionary *_domainToDomainsWithAssociatedCredentials;
    NSMutableDictionary *_domainsToDomainsToConsiderIdentical;
}

@property (copy, nonatomic) NSArray *domainsWithAssociatedCredentials;
@property (copy, nonatomic) NSArray *domainsToConsiderIdentical;

- (id)init;
- (void).cxx_destruct;
- (id)domainsWithAssociatedCredentialsForDomain:(id)a0;
- (id)domainsToConsiderIdenticalToDomain:(id)a0;
- (id)initWithDomainsWithAssociatedCredentials:(id)a0 domainsToConsiderIdentical:(id)a1;
- (void)_updateDomainToDomainsWithAssociatedCredentials;
- (void)_updateDomainToDomainsToConsiderIdentical;
- (id)initWithDomainsWithAssociatedCredentials:(id)a0;

@end
