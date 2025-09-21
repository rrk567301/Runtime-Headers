@class NSString, NSArray, HMAccessCodeValue, HMAccessCodeUserInformationValue;

@interface HMHomeAccessCodeValue : NSObject <HMFObject, NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) HMAccessCodeValue *accessCodeValue;
@property (readonly, copy) HMAccessCodeUserInformationValue *userInformationValue;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)homeAccessCodeValueWithStringValue:(id)a0 label:(id)a1;
+ (id)homeAccessCodeValueWithStringValue:(id)a0 removedUserInfo:(id)a1;
+ (id)homeAccessCodeValueWithStringValue:(id)a0 userUUID:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAccessCodeValue:(id)a0 userInformationValue:(id)a1;

@end
