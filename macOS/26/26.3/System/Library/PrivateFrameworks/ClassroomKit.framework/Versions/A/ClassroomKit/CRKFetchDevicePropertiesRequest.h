@class NSArray;

@interface CRKFetchDevicePropertiesRequest : CATTaskRequest

@property (copy, nonatomic) NSArray *propertyKeys;

+ (BOOL)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
