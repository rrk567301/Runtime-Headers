@interface LNMeasurementValueType : LNValueType

@property (class, readonly, nonatomic) LNMeasurementValueType *unsupportedMeasurementValueType;
@property (class, readonly, nonatomic) LNMeasurementValueType *accelerationValueType;
@property (class, readonly, nonatomic) LNMeasurementValueType *angleValueType;
@property (class, readonly, nonatomic) LNMeasurementValueType *areaValueType;
@property (class, readonly, nonatomic) LNMeasurementValueType *concentrationMassValueType;
@property (class, readonly, nonatomic) LNMeasurementValueType *dispersionValueType;
@property (class, readonly, nonatomic) LNMeasurementValueType *durationValueType;
@property (class, readonly, nonatomic) LNMeasurementValueType *electricChargeValueType;
@property (class, readonly, nonatomic) LNMeasurementValueType *electricCurrentValueType;
@property (class, readonly, nonatomic) LNMeasurementValueType *electricPotentialDifferenceValueType;
@property (class, readonly, nonatomic) LNMeasurementValueType *electricResistanceValueType;
@property (class, readonly, nonatomic) LNMeasurementValueType *energyValueType;
@property (class, readonly, nonatomic) LNMeasurementValueType *frequencyValueType;
@property (class, readonly, nonatomic) LNMeasurementValueType *fuelEfficiencyValueType;
@property (class, readonly, nonatomic) LNMeasurementValueType *illuminanceValueType;
@property (class, readonly, nonatomic) LNMeasurementValueType *informationStorageValueType;
@property (class, readonly, nonatomic) LNMeasurementValueType *lengthValueType;
@property (class, readonly, nonatomic) LNMeasurementValueType *massValueType;
@property (class, readonly, nonatomic) LNMeasurementValueType *powerValueType;
@property (class, readonly, nonatomic) LNMeasurementValueType *pressureValueType;
@property (class, readonly, nonatomic) LNMeasurementValueType *speedValueType;
@property (class, readonly, nonatomic) LNMeasurementValueType *temperatureValueType;
@property (class, readonly, nonatomic) LNMeasurementValueType *volumeValueType;

@property (readonly, nonatomic) long long unitType;

+ (char)supportsSecureCoding;
+ (id)objectClassesForCoding;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (Class)objectClass;
- (id)initWithUnitType:(long long)a0;
- (id)typeIdentifierAsString;

@end
