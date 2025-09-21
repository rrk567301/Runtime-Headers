@class NSString;

@interface CNCDContainersInAccountWithIdentifierPredicate : CNPredicate <CNCDContainerPredicate>

@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) char includeDisabledContainers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)cn_coreDataPredicate;
- (id)cn_persistenceFilterRequest;
- (id)cn_topLevelFilter;
- (id)initWithAccountIdentifider:(id)a0 includeDisabledContainers:(char)a1;

@end
