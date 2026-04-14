@class NSString, HKMedicalCodingCollection;

@interface HKConceptResolutionDefinition : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKMedicalCodingCollection *codingCollection;
@property (readonly, copy, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) long long recordCategoryType;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCodingCollection:(id)a0 countryCode:(id)a1;
- (id)initWithCodingCollection:(id)a0 countryCode:(id)a1 recordCategoryType:(long long)a2;

@end
