@class NSString, NSDictionary;

@interface PKEngagementRequest : NSObject

@property (copy, nonatomic) NSString *command;
@property (copy, nonatomic) NSString *propertyName;
@property (copy, nonatomic) NSDictionary *parameters;

+ (id)noPropertyError;
+ (id)malformedRequest;
+ (id)noCommandError;
+ (id)unrecognizedCommandError;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToEngagementRequest:(id)a0;
- (unsigned long long)propertySource;

@end
