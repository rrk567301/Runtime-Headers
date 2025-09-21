@class NSString, HKMedication;

@interface HKUserTrackedMedication : HKUserTrackedConcept

@property (readonly, copy, nonatomic) NSString *nickname;
@property (readonly, nonatomic) char isArchived;
@property (readonly, nonatomic) char hasSchedule;
@property (readonly, copy, nonatomic) HKMedication *medication;

+ (char)supportsSecureCoding;
+ (char)isConcreteUserTrackedConceptClass;
+ (char)supportsEquivalence;
+ (id)userTrackedMedicationWithNickname:(id)a0 isArchived:(char)a1 hasSchedule:(char)a2 medication:(id)a3 device:(id)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEquivalent:(id)a0;

@end
