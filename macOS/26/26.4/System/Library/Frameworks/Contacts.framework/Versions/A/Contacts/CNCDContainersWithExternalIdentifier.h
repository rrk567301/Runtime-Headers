@class NSString;

@interface CNCDContainersWithExternalIdentifier : CNPredicate <CNCDContainerPredicate>

@property (readonly, nonatomic) NSString *externalIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)cn_coreDataPredicate;
- (id)initWithExternalIdentifier:(id)a0;
- (id)cn_persistenceFilterRequest;
- (id)cn_topLevelFilter;

@end
