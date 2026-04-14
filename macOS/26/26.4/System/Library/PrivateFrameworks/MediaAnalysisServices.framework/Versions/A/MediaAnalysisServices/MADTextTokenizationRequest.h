@class NSArray;

@interface MADTextTokenizationRequest : MADTextRequest

@property (nonatomic) unsigned long long version;
@property (readonly, nonatomic) NSArray *tokenizationResults;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)maxTokenSize;
+ (id)maxTokenSizeForVersion:(unsigned long long)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
