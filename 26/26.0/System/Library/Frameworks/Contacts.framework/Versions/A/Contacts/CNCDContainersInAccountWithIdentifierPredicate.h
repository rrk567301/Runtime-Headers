@class NSString;

@interface CNCDContainersInAccountWithIdentifierPredicate : CNPredicate <CNCDContainerPredicate>

@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) BOOL includeDisabledContainers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)cn_coreDataPredicate;
- (void).cxx_destruct;
- (id)cn_persistenceFilterRequest;
- (id)cn_topLevelFilter;
- (id)initWithAccountIdentifider:(id)a0 includeDisabledContainers:(BOOL)a1;

@end
