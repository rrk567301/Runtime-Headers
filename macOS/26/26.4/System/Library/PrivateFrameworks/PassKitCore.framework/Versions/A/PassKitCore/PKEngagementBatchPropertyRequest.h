@class NSDictionary;

@interface PKEngagementBatchPropertyRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *requests;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 errorsByRequestID:(id *)a1 error:(id *)a2;
- (BOOL)isEqualToEngagementBatchRequest:(id)a0;
- (id)parametersByPropertyName;
- (id)propertiesForSource:(unsigned long long)a0;
- (id)requestsForSource:(unsigned long long)a0;

@end
