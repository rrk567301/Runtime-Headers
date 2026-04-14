@class NSUUID, NSString, NSData, NSDate, NSURL, MTCDSound;

@interface MTCDTimer : NSManagedObject

@property (nonatomic, copy) NSDate *dismissedDate;
@property (nonatomic) double duration;
@property (nonatomic, copy) NSDate *firedDate;
@property (nonatomic, copy) NSDate *lastModifiedDate;
@property (nonatomic, copy) NSUUID *mtid;
@property (nonatomic, copy) NSData *siriContext;
@property (nonatomic) long long state;
@property (nonatomic, copy) NSData *timerContext;
@property (nonatomic, copy) NSURL *timerURL;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSData *fireTime;
@property (nonatomic, retain) MTCDSound *sound;
@property (nonatomic, readonly) NSString *description;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;
- (id)siriContextDecoded;
- (id)timerContextDecoded;

@end
