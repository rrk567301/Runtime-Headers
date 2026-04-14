@class NSString, HKMedicationConcept;

@interface HKUserAnnotatedMedication : NSObject <HKTypeProtocol, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *nickname;
@property (readonly, nonatomic) BOOL isArchived;
@property (readonly, nonatomic) BOOL hasSchedule;
@property (readonly, copy, nonatomic) HKMedicationConcept *medication;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)hk_objectType;
- (id)initWithNickname:(id)a0 isArchived:(BOOL)a1 hasSchedule:(BOOL)a2 medication:(id)a3;

@end
