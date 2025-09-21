@class NSArray;

@interface CRKFetchDevicePropertiesRequest : CATTaskRequest

@property (copy, nonatomic) NSArray *propertyKeys;

+ (char)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
