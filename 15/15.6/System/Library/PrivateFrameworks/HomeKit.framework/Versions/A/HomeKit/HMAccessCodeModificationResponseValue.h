@class HMAccessoryAccessCodeValue, NSUUID, NSString, NSArray, NSError, HMAccessCodeValue;

@interface HMAccessCodeModificationResponseValue : NSObject <HMFObject, NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSUUID *accessoryUUID;
@property (readonly, copy) HMAccessoryAccessCodeValue *accessoryAccessCodeValue;
@property (readonly, copy) HMAccessCodeValue *accessCodeValue;
@property (readonly) long long operationType;
@property (readonly) NSError *error;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAccessoryUUID:(id)a0 accessoryAccessCodeValue:(id)a1 accessCodeValue:(id)a2 operationType:(long long)a3 error:(id)a4;

@end
