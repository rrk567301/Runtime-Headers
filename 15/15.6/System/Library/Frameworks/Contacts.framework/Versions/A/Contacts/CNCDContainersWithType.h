@class NSString;

@interface CNCDContainersWithType : CNPredicate <CNCDContainerPredicate>

@property long long type;
@property (readonly, nonatomic) char includeDisabledContainers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)cn_coreDataPredicate;
- (id)cn_persistenceFilterRequest;
- (id)cn_topLevelFilter;
- (id)initWithType:(long long)a0 includeDisabledContainers:(char)a1;

@end
