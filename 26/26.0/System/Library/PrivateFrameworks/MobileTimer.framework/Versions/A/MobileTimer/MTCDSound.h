@class NSString, MTCDAlarm, MTCDTimer;

@interface MTCDSound : NSManagedObject

@property (nonatomic) long long mediaItemIdentifier;
@property (nonatomic) long long soundType;
@property (nonatomic) double volumeLevel;
@property (nonatomic, copy) NSString *toneIdentifier;
@property (nonatomic, copy) NSString *vibrationIdentifier;
@property (nonatomic, retain) MTCDAlarm *alarm;
@property (nonatomic, retain) MTCDTimer *timer;
@property (nonatomic, readonly) NSString *description;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
