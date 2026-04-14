@class NSData, NSString, NSArray;

@interface HMBLocalZoneIDRow : HMFObject <NSCopying, NSSecureCoding, HMBLocalZoneID>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *token;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *labels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)attributeDescriptions;
- (id)initWithName:(id)a0 token:(id)a1;

@end
