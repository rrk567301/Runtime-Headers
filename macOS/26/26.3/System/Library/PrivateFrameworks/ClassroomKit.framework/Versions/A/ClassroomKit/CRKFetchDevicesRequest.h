@class NSArray;

@interface CRKFetchDevicesRequest : CATTaskRequest

@property (copy, nonatomic) NSArray *deviceIdentifiers;

+ (BOOL)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
