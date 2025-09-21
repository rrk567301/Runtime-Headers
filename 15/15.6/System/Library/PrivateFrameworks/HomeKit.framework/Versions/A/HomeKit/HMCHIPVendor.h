@class NSUUID, NSString, NSArray, NSNumber;

@interface HMCHIPVendor : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (getter=isAppleVendor) char appleVendor;
@property (getter=isSystemCommissionerVendor) char systemCommissionerVendor;
@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSNumber *identifier;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)UUIDFromIdentifier:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1;

@end
