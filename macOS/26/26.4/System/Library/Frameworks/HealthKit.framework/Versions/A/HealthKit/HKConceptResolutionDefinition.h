@class NSString, HKMedicalCodingCollection;

@interface HKConceptResolutionDefinition : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKMedicalCodingCollection *codingCollection;
@property (readonly, copy, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) long long recordCategoryType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithCodingCollection:(id)a0 countryCode:(id)a1;
- (id)initWithCodingCollection:(id)a0 countryCode:(id)a1 recordCategoryType:(long long)a2;

@end
