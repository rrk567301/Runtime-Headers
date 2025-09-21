@class NSNumber;

@interface LogGenericMedicationsIntent : INIntent

@property (nonatomic, retain) NSNumber *isTimeframeToday;
@property (nonatomic, retain) NSNumber *medStatus;
@property (nonatomic, retain) NSNumber *confirmedLogAsScheduled;
@property (nonatomic, retain) NSNumber *shouldOverwriteExistingStatuses;

- (id)init;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;
- (id)initWithCoder:(id)a0;

@end
