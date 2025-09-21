@class NSString, NSNumber, HKMedicalCoding;

@interface HKCodedQuantity : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *value;
@property (readonly, copy, nonatomic) NSString *rawValue;
@property (readonly, copy, nonatomic) NSString *localizedValue;
@property (readonly, copy, nonatomic) NSNumber *numberValue;
@property (readonly, nonatomic) double doubleValue;
@property (readonly, copy, nonatomic) HKMedicalCoding *comparatorCoding;
@property (readonly, copy, nonatomic) HKMedicalCoding *unitCoding;

+ (id)_numberFormatter;
+ (id)codedQuantityWithValue:(id)a0 comparatorCoding:(id)a1 unitCoding:(id)a2;
+ (id)codedQuantityWithValue:(id)a0 unitCoding:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithRawValue:(id)a0 comparatorCoding:(id)a1 unitCoding:(id)a2;
- (id)quantityRepresentationWithUCUMConverter:(id)a0 error:(id *)a1;

@end
