@class NSString;

@interface CNCDContainersInAccountWithExternalIdentifier : CNPredicate <CNCDContainerPredicate>

@property (readonly, nonatomic) NSString *accountExternalIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)cn_coreDataPredicate;
- (id)cn_topLevelFilter;
- (id)cn_persistenceFilterRequest;
- (id)initWithAccountExternalIdentifider:(id)a0;

@end
