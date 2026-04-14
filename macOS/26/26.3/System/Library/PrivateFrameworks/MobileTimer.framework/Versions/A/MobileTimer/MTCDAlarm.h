@class NSUUID, NSString, NSData, NSDate, MTCDSound;

@interface MTCDAlarm : NSManagedObject

@property (nonatomic) BOOL allowsSnooze;
@property (nonatomic) long long day;
@property (nonatomic) long long dismissedAction;
@property (nonatomic, copy) NSDate *dismissedDate;
@property (nonatomic) BOOL enabled;
@property (nonatomic, copy) NSDate *firedDate;
@property (nonatomic) long long hour;
@property (nonatomic, copy) NSDate *keepOffUntilDate;
@property (nonatomic, copy) NSDate *lastModifiedDate;
@property (nonatomic) long long minute;
@property (nonatomic) long long month;
@property (nonatomic, copy) NSUUID *mtid;
@property (nonatomic) long long repeatSchedule;
@property (nonatomic) long long silentModeOptions;
@property (nonatomic, copy) NSData *siriContext;
@property (nonatomic) BOOL sleepAlarm;
@property (nonatomic) long long snoozeDuration;
@property (nonatomic, copy) NSDate *snoozeFireDate;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) long long year;
@property (nonatomic) BOOL sleepSchedule;
@property (nonatomic, retain) MTCDSound *sound;
@property (nonatomic, readonly) NSString *description;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;
- (id)siriContextDecoded;

@end
