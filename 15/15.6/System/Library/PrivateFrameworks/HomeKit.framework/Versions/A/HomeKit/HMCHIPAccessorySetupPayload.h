@class NSString, NSNumber, NSArray;

@interface HMCHIPAccessorySetupPayload : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char hasShortDiscriminator;
@property (copy, nonatomic) NSString *setupPayloadString;
@property (copy, nonatomic) NSNumber *vendorID;
@property (copy, nonatomic) NSNumber *productID;
@property (copy, nonatomic) NSNumber *deviceTypeID;
@property (copy, nonatomic) NSString *serialNumber;
@property (nonatomic) char requiresCustomFlow;
@property (readonly, copy, nonatomic) NSNumber *setupCode;
@property (readonly, copy, nonatomic) NSNumber *discriminator;
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
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSetupCode:(id)a0 discriminator:(id)a1;

@end
