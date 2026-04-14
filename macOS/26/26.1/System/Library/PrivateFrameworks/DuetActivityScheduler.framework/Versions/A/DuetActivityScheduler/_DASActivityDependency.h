@class NSString;

@interface _DASActivityDependency : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property long long batchSize;
@property (readonly, nonatomic) BOOL isActivityCompletionBased;

- (unsigned long long)hash;
- (id)dictionary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initActivityCompletionDependencyWithIdentifier:(id)a0;
- (id)initResultDependencyWithIdentifier:(id)a0 batchSize:(long long)a1;
- (BOOL)isSatisfiedByAvailableResultCount:(long long)a0;
- (BOOL)isSatisfiedByResult:(id)a0;

@end
