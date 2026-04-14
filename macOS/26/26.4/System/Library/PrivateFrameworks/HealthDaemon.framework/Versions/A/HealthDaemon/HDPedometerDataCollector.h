@class NSString, NSNumber;

@interface HDPedometerDataCollector : HDCoreMotionDataCollector <HDUserCharacteristicsProfileObserver> {
    NSNumber *_userCondition;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isPedometerDataCollectionSupported;

- (id)initWithProfile:(id)a0;
- (id)persistentIdentifier;
- (id)collectedTypes;
- (void)userCharacteristicsManager:(id)a0 didUpdateUserProfile:(id)a1;
- (void).cxx_destruct;
- (id)queue_newDataSource;
- (Class)coreMotionDatumClass;
- (void)dealloc;
- (double)queue_differenceFromDatum:(id)a0 toDatum:(id)a1 type:(id)a2;

@end
