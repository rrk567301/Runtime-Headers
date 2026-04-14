@class NSArray, NSString;

@interface CNContainerIdentifiersPredicate : CNPredicate <CNCDContainerPredicate>

@property (readonly, copy, nonatomic) NSArray *identifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifiers:(id)a0;
- (void).cxx_destruct;
- (id)cn_coreDataPredicate;
- (id)cn_persistenceFilterRequest;
- (id)cn_topLevelFilter;

@end
