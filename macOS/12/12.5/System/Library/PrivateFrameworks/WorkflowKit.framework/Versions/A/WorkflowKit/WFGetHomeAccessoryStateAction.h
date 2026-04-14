@class NSString;

@interface WFGetHomeAccessoryStateAction : WFAction <WFHomeManagerEventObserver>

@property (readonly, nonatomic) NSString *homeIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)homeAccessoryStateActionWithHome:(id)a0;

- (void)dealloc;
- (id)localizedName;
- (id)home;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (id)characteristic;
- (id)homeName;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)initializeParameters;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)outputMeasurementUnitType;
- (id)outputContentClasses;
- (id)localizedDescriptionSummary;
- (id)localizedAttribution;
- (id)localizedDefaultOutputName;
- (void)updateCharacteristicsEnumeration;

@end
