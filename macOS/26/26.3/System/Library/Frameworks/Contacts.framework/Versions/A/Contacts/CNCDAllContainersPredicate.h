@class NSString;

@interface CNCDAllContainersPredicate : CNPredicate <CNCDContainerPredicate>

@property (nonatomic) BOOL includeDisabledContainers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)cn_coreDataPredicate;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)cn_persistenceFilterRequest;
- (id)cn_topLevelFilter;
- (id)initWithIncludeDisabledContainers:(BOOL)a0;

@end
