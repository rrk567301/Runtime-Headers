@class NSString;

@interface CNCDContainersWithProviderIdentifier : CNPredicate <CNCDContainerPredicate>

@property (readonly, nonatomic) NSString *providerIdentifier;
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
- (id)initWithProviderIdentifier:(id)a0;

@end
