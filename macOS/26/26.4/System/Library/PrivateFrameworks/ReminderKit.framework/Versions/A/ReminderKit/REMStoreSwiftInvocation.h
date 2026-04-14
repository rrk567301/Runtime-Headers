@class NSString, REMFetchResultToken;

@interface REMStoreSwiftInvocation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) REMFetchResultToken *fetchResultTokenToDiffAgainst;

- (void)encodeWithCoder:(id)a0;
- (id)initWithFetchResultTokenToDiffAgainst:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
