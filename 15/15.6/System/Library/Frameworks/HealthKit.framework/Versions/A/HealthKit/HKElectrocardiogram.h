@class HKQuantity, NSArray, NSString, NSNumber;

@interface HKElectrocardiogram : HKSample <_HKBinarySample> {
    struct Electrocardiogram { void /* function */ **_vptr$Base; double _frequency; struct PtrVector<binarysample::ElectrocardiogramLead> { struct vector<std::unique_ptr<binarysample::ElectrocardiogramLead>, std::allocator<std::unique_ptr<binarysample::ElectrocardiogramLead>>> { void *__begin_; void *__end_; struct __compressed_pair<std::unique_ptr<binarysample::ElectrocardiogramLead> *, std::allocator<std::unique_ptr<binarysample::ElectrocardiogramLead>>> { void *__value_; } __end_cap_; } _v; } _leads; struct { unsigned char frequency : 1; } _has; } _reading;
    unsigned long long _privateClassification;
    HKQuantity *_averageHeartRate;
}

@property (readonly, nonatomic, getter=_algorithmVersion) NSNumber *algorithmVersion;
@property (readonly, nonatomic) unsigned long long privateClassification;
@property (readonly, nonatomic, getter=privateSymptoms) unsigned long long privateSymptoms;
@property (readonly, copy, nonatomic) NSArray *leadNames;
@property (readonly, nonatomic, getter=_localizedSymptoms) NSArray *localizedSymptoms;
@property (readonly, nonatomic) long long numberOfVoltageMeasurements;
@property (readonly, copy, nonatomic) HKQuantity *samplingFrequency;
@property (readonly, nonatomic) long long classification;
@property (readonly, copy, nonatomic) HKQuantity *averageHeartRate;
@property (readonly, nonatomic) long long symptomsStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsSecureCoding;
+ (id)_electrocardiogramWithStartDate:(id)a0 device:(id)a1 metadata:(id)a2;
+ (char)_isConcreteObjectClass;
+ (id)_localizedClassification:(unsigned long long)a0 withActiveAlgorithmVersion:(long long)a1;
+ (char)supportsEquivalence;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (id)payload;
- (id)frequency;
- (char)isEquivalent:(id)a0;
- (long long)symptoms;
- (void)setReading:(struct Electrocardiogram { void /* function */ **x0; double x1; struct PtrVector<binarysample::ElectrocardiogramLead> { struct vector<std::unique_ptr<binarysample::ElectrocardiogramLead>, std::allocator<std::unique_ptr<binarysample::ElectrocardiogramLead>>> { void *x0; void *x1; struct __compressed_pair<std::unique_ptr<binarysample::ElectrocardiogramLead> *, std::allocator<std::unique_ptr<binarysample::ElectrocardiogramLead>>> { void *x0; } x2; } x0; } x2; struct { unsigned char x0 : 1; } x3; })a0;
- (long long)numberOfValues;
- (unsigned long long)_classification;
- (void)_enumerateDataForLead:(long long)a0 block:(id /* block */)a1;
- (id)_localizedClassificationWithActiveAlgorithmVersion:(long long)a0;
- (void)_setAverageHeartRate:(id)a0;
- (void)_setPayload:(id)a0;
- (void)_setPrivateClassification:(unsigned long long)a0;
- (void)_setSymptomsStatus:(long long)a0;
- (unsigned long long)_symptoms;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned long long x1; })a0;
- (void)copyMeasurementFlagsForLead:(long long)a0 count:(unsigned long long)a1 target:(char *)a2;
- (void)copyMeasurementValuesForLead:(long long)a0 count:(unsigned long long)a1 target:(float *)a2;
- (void)enumerateDataForLead:(long long)a0 block:(id /* block */)a1;
- (char)prepareForSaving:(id *)a0;
- (id)voltageMeasurementEnumerator;

@end
