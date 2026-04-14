@class NSString, NSNumber;

@interface HDPedometerDataCollector : HDCoreMotionDataCollector <HDUserCharacteristicsProfileObserver> {
    NSNumber *_userCondition;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isPedometerDataCollectionSupported;

- (id)queue_newDataSource;
- (id)collectedTypes;
- (id)persistentIdentifier;
- (double)queue_differenceFromDatum:(id)a0 toDatum:(id)a1 type:(id)a2;
- (id)initWithProfile:(id)a0;
- (void)userCharacteristicsManager:(id)a0 didUpdateUserProfile:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (Class)coreMotionDatumClass;

@end
