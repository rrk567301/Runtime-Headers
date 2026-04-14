@class NSString, NSDictionary;

@interface PKEngagementPropertyRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long propertySource;
@property (copy, nonatomic) NSString *propertyName;
@property (copy, nonatomic) NSDictionary *parameters;

+ (id)malformedRequestError;
+ (id)noPropertyError;
+ (id)noCommandError;
+ (id)unrecognizedCommandError;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToEngagementRequest:(id)a0;

@end
