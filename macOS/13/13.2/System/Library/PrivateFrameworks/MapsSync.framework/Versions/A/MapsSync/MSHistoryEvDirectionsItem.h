@class NSString;

@interface MSHistoryEvDirectionsItem : MSHistoryDirectionsItem {
    void /* unknown type, empty encoding */ _requiredCharge;
    void /* unknown type, empty encoding */ _vehicleIdentifier;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic) double requiredCharge;
@property (nonatomic, copy) NSString *vehicleIdentifier;

- (void).cxx_destruct;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0;
- (id)initWithObject:(id)a0 store:(id)a1;
- (id)initWithStore:(id)a0 requiredCharge:(double)a1 vehicleIdentifier:(id)a2;

@end
