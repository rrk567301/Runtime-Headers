@protocol CalBirthdayListener;

@interface CADBirthdayListener : NSObject

@property (retain, nonatomic) id<CalBirthdayListener> ekBirthdayListener;
@property (retain, nonatomic) Class listenerClass;

+ (id)sharedListener;
+ (void)start;
+ (void)reset;
+ (char)birthdayCalendarEnabled;
+ (void)setBirthdayCalendarEnabled:(char)a0;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)reset;
- (char)birthdayCalendarEnabled;
- (void)setBirthdayCalendarEnabled:(char)a0;

@end
