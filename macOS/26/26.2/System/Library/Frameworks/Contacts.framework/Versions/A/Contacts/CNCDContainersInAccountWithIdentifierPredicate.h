@class NSString;

@interface CNCDContainersInAccountWithIdentifierPredicate : CNPredicate <CNCDContainerPredicate>

@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) BOOL includeDisabledContainers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)cn_coreDataPredicate;
- (id)init;
- (id)cn_persistenceFilterRequest;
- (id)cn_topLevelFilter;
- (id)initWithAccountIdentifider:(id)a0 includeDisabledContainers:(BOOL)a1;

@end
