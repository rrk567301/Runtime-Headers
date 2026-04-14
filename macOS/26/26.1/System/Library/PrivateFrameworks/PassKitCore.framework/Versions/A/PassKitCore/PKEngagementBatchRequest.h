@class NSDictionary;

@interface PKEngagementBatchRequest : NSObject

@property (copy, nonatomic) NSDictionary *requests;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0 errorsByRequestID:(id *)a1 error:(id *)a2;
- (BOOL)isEqualToEngagementBatchRequest:(id)a0;
- (id)parametersByPropertyName;
- (id)propertiesForSource:(unsigned long long)a0;

@end
