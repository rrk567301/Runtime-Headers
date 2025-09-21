@class _REMFetchExecutor, REMFetchResultToken;

@interface REMFetchRequest : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _REMFetchExecutor *fetchExecutor;
@property (retain, nonatomic) REMFetchResultToken *fetchResultToken;
@property (nonatomic) long long type;
@property (nonatomic) unsigned long long fetchLimit;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithType:(long long)a0;
- (id)countOnlyFetchRequest;
- (id)fetchRequestWithFetchResultToken:(id)a0;
- (id)initWithFetchExecutor:(id)a0;
- (id)metadataFetchRequest;
- (id)objectIDsOnlyFetchRequest;
- (id)storagesAndParentFetchRequest;
- (id)storagesOnlyFetchRequest;

@end
