@class NSUUID, NSDate, NSString, _MKFGuest, MKFWeekDayScheduleRuleDatabaseID, Protocol, _MKFHAPAccessory, _MKFInvitation, NSNumber;
@protocol MKFInvitation, MKFHAPAccessory, MKFGuest;

@interface _MKFWeekDayScheduleRule : _MKFModel <MKFWeekDayScheduleRule, MKFWeekDayScheduleRulePrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (copy, nonatomic) NSNumber *daysOfTheWeek;
@property (copy, nonatomic) NSNumber *endTime;
@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSNumber *startTime;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (retain, nonatomic) _MKFGuest *guest;
@property (retain, nonatomic) _MKFHAPAccessory *hapAccessory;
@property (retain, nonatomic) _MKFInvitation *invitation;
@property (copy, nonatomic) NSNumber *daysOfTheWeek;
@property (copy, nonatomic) NSNumber *endTime;
@property (copy, nonatomic) NSNumber *startTime;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (retain, nonatomic) id<MKFGuest> guest;
@property (retain, nonatomic) id<MKFInvitation> invitation;
@property (retain, nonatomic) id<MKFHAPAccessory> hapAccessory;
@property (readonly, copy, nonatomic) MKFWeekDayScheduleRuleDatabaseID *databaseID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)initWeekDayScheduleRuleWithModelID:(id)a0 startTime:(id)a1 endTime:(id)a2 daysOfTheWeek:(id)a3 context:(id)a4;
+ (id)populateWeekDayScheduleRuleFromDictionary:(id)a0 existingLocalModels:(id)a1 context:(id)a2;

- (BOOL)isValid;
- (id)dictionaryRepresentation;
- (id)castIfWeekDayScheduleRule;
- (void)updateFromWeekDayScheduleRule:(id)a0;
- (id)weekDayScheduleRule;

@end
