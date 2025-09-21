@class HKUnit, NSString, NSUUID, HKMedicationDoseEventType, NSDate, HKHealthConceptIdentifier, NSNumber;

@interface HKMedicationDoseEvent : HKSample <NSSecureCoding, NSCopying> {
    long long _logOrigin;
    NSString *_scheduleItemIdentifier;
    NSUUID *_medicationUUID;
    NSString *_medicationIdentifier;
    HKHealthConceptIdentifier *_medicationConceptIdentifier;
    NSNumber *_scheduledDoseQuantity;
    NSNumber *_doseQuantity;
    NSDate *_scheduledDate;
    long long _logStatus;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long logOrigin;
@property (readonly, copy, nonatomic) NSString *scheduleItemIdentifier;
@property (readonly, copy, nonatomic) NSUUID *medicationUUID;
@property (readonly, copy, nonatomic) NSString *medicationIdentifier;
@property (readonly, copy, nonatomic) NSString *doseUnitString;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) BOOL isLastScheduledDose;
@property (readonly, copy) HKMedicationDoseEventType *medicationDoseEventType;
@property (readonly, nonatomic) long long scheduleType;
@property (readonly, copy, nonatomic) HKHealthConceptIdentifier *medicationConceptIdentifier;
@property (readonly, copy, nonatomic) NSDate *scheduledDate;
@property (readonly, copy, nonatomic) NSNumber *scheduledDoseQuantity;
@property (readonly, copy, nonatomic) NSNumber *doseQuantity;
@property (readonly, nonatomic) long long logStatus;
@property (readonly, copy, nonatomic) HKUnit *unit;

+ (BOOL)_isConcreteObjectClass;
+ (BOOL)supportsEquivalence;
+ (id)_metadataWithSyncIdentifier:(id)a0 syncVersion:(id)a1 isLastScheduledDose:(BOOL)a2;
+ (id)_newMedicationDoseEventWithType:(id)a0 startDate:(id)a1 endDate:(id)a2 device:(id)a3 metadata:(id)a4 logOrigin:(long long)a5 scheduleItemIdentifier:(id)a6 medicationUUID:(id)a7 medicationIdentifier:(id)a8 scheduledDoseQuantity:(id)a9 doseQuantity:(id)a10 scheduledDate:(id)a11 logStatus:(long long)a12 doseUnitString:(id)a13 config:(id /* block */)a14;
+ (id)medicationDoseEventWithLogOrigin:(long long)a0 scheduleItemIdentifier:(id)a1 medicationIdentifier:(id)a2 scheduledDoseQuantity:(id)a3 doseQuantity:(id)a4 scheduledDate:(id)a5 startDate:(id)a6 logStatus:(long long)a7 doseUnitString:(id)a8 metadata:(id)a9;
+ (id)medicationDoseEventWithType:(id)a0 startDate:(id)a1 endDate:(id)a2 device:(id)a3 metadata:(id)a4 logOrigin:(long long)a5 scheduleItemIdentifier:(id)a6 medicationIdentifier:(id)a7 scheduledDoseQuantity:(double)a8 doseQuantity:(double)a9 scheduledDate:(id)a10 logStatus:(long long)a11 medicationUuid:(id)a12;
+ (id)medicationDoseEventWithType:(id)a0 startDate:(id)a1 endDate:(id)a2 device:(id)a3 metadata:(id)a4 logOrigin:(long long)a5 scheduleItemIdentifier:(id)a6 medicationIdentifier:(id)a7 scheduledDoseQuantity:(double)a8 doseQuantity:(double)a9 scheduledDate:(id)a10 logStatus:(long long)a11 medicationUuid:(id)a12 doseUnitString:(id)a13;

- (BOOL)isEquivalent:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned long long x1; })a0;
- (void)_setDoseQuantity:(id)a0;
- (void)_setDoseUnitString:(id)a0;
- (void)_setLogOrigin:(long long)a0;
- (void)_setLogStatus:(long long)a0;
- (void)_setMedicationConceptIdentifier:(id)a0;
- (void)_setMedicationIdentifier:(id)a0;
- (void)_setMedicationUUID:(id)a0;
- (void)_setScheduleItemIdentifier:(id)a0;
- (void)_setScheduledDate:(id)a0;
- (void)_setScheduledDoseQuantity:(id)a0;
- (id)sanitizedSample:(id)a0 forEntitlements:(id)a1;

@end
