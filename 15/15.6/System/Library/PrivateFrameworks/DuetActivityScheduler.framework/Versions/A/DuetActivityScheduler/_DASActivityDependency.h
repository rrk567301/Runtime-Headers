@class NSString;

@interface _DASActivityDependency : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property long long batchSize;
@property (readonly, nonatomic) char isActivityCompletionBased;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initActivityCompletionDependencyWithIdentifier:(id)a0;
- (id)initResultDependencyWithIdentifier:(id)a0 batchSize:(long long)a1;
- (char)isSatisfiedByAvailableResultCount:(long long)a0;
- (char)isSatisfiedByResult:(id)a0;

@end
