@class NSString, NSSet, HKHealthConceptIdentifier;

@interface HKMedicationConcept : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKHealthConceptIdentifier *identifier;
@property (readonly, copy, nonatomic) NSString *displayText;
@property (readonly, copy, nonatomic) NSString *generalForm;
@property (readonly, copy, nonatomic) NSSet *relatedCodings;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithHealthConceptIdentifier:(id)a0 displayText:(id)a1 generalForm:(id)a2 relatedCodings:(id)a3;

@end
