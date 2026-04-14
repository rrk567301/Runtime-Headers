@class NSString;

@interface VUILocalNotificationServiceOptionsKey : NSObject

@property (class, nonatomic, readonly) NSString *bannerOnly;
@property (class, nonatomic, readonly) NSString *interruptionLevel;
@property (class, nonatomic, readonly) NSString *sound;

- (id)init;

@end
