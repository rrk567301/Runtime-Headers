@protocol HDDatabaseCorruptionEventStoreDelegate;

@interface HDDatabaseCorruptionEventStore : NSObject

@property (weak, nonatomic) id<HDDatabaseCorruptionEventStoreDelegate> delegate;

+ (id)corruptionEventKeyForProfileIdentifier:(id)a0 component:(long long)a1;
+ (id)TTREventKeyForProfileIdentifier:(id)a0 component:(long long)a1;
+ (id)outOfSpaceEventKey;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)persistCorruptionEvent:(id)a0;
- (id)mostRecentCorruptionEventForProfileIdentifier:(id)a0 component:(long long)a1;
- (void)persistDeviceOutOfSpaceEvent;
- (id)dateOfMostRecentDeviceOutOfSpaceEvent;
- (void)persistMigrationFailureEventForProfile:(id)a0 component:(long long)a1 schemaVersion:(long long)a2;
- (id)mostRecentMigrationFailureEventForProfile:(id)a0 component:(long long)a1 schemaVersion:(long long *)a2;
- (id)mostRecentTTRAttemptForProfileIdentifier:(id)a0 component:(long long)a1;
- (void)persistTTRAttempt:(id)a0 forProfileIdentifier:(id)a1 component:(long long)a2;
- (void)persistObliterationForReason:(id)a0;
- (id)dateOfMostRecentObliteration:(id *)a0;

@end
