@class NSUUID, NSString, NSArray, HMAccessCodeValue, NSNumber;

@interface HMAccessoryAccessCodeValue : NSObject <HMFObject, NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSUUID *accessoryUUID;
@property (readonly, copy) HMAccessCodeValue *accessCodeValue;
@property (readonly, copy) NSNumber *uniqueIdentifier;
@property (readonly) char hasRestrictions;
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
- (id)initWithAccessoryUUID:(id)a0 accessCodeValue:(id)a1 uniqueIdentifier:(id)a2 hasRestrictions:(char)a3;

@end
