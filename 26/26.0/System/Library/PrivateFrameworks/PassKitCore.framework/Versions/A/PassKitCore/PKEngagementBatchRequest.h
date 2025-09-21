@class NSDictionary;

@interface PKEngagementBatchRequest : NSObject

@property (copy, nonatomic) NSDictionary *requests;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 errorsByRequestID:(id *)a1 error:(id *)a2;
- (BOOL)isEqualToEngagementBatchRequest:(id)a0;
- (id)parametersByPropertyName;
- (id)propertiesForSource:(unsigned long long)a0;

@end
