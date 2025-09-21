@class NSUUID, NSString, NSArray;

@interface HMFMessageDestination : HMFObject <HMFObject, NSCopying, NSSecureCoding>

@property (class, readonly, copy) HMFMessageDestination *allMessageDestinations;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *target;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allMessageTargets;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTarget:(id)a0;

@end
