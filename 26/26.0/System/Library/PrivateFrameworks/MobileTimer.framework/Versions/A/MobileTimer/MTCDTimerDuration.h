@class NSString, MTCDSound, NSDate;

@interface MTCDTimerDuration : NSManagedObject

@property (nonatomic) double duration;
@property (nonatomic) BOOL isFavorite;
@property (nonatomic, copy) NSDate *lastModified;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) BOOL validRecent;
@property (nonatomic) BOOL latest;
@property (nonatomic, retain) MTCDSound *sound;
@property (nonatomic, readonly) NSString *description;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
