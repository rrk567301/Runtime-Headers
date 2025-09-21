@interface MSServerEvaluationStatus : MapsSync.MapsSyncObject {
    void /* unknown type, empty encoding */ _arpStatus;
    void /* unknown type, empty encoding */ _positionIndex;
    void /* unknown type, empty encoding */ _rapStatus;
    void /* unknown type, empty encoding */ _reliabilityStatus;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic) char arpStatus;
@property (nonatomic) long long positionIndex;
@property (nonatomic) char rapStatus;
@property (nonatomic) char reliabilityStatus;

- (id)initWithArpStatus:(char)a0 positionIndex:(long long)a1 rapStatus:(char)a2 reliabilityStatus:(char)a3;
- (id)initWithObject:(id)a0 store:(id)a1 lazyLoad:(char)a2;
- (id)initWithStore:(id)a0 arpStatus:(char)a1 positionIndex:(long long)a2 rapStatus:(char)a3 reliabilityStatus:(char)a4;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0 lazyLoad:(char)a1;

@end
