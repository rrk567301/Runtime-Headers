@class NSString;

@interface CNCDGroupsInContainerPredicate : CNPredicate <CNCDContainerScopedGroupPredicate>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)containerIdentifier;
- (id)initWithIdentifier:(id)a0;
- (id)cn_coreDataPredicate;
- (void).cxx_destruct;
- (id)cn_coreDataExchangePredicate;

@end
