@class NSData, NSString, NSArray;

@interface HMBLocalZoneIDRow : HMFObject <NSCopying, NSSecureCoding, HMBLocalZoneID>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *token;
@property (readonly, nonatomic) NSString *name;
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
- (void)encodeWithCoder:(id)a0;
- (id)labels;
- (id)initWithName:(id)a0 token:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
