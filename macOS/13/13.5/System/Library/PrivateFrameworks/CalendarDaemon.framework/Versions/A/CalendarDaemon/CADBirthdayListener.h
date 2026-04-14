@protocol CalBirthdayListener;

@interface CADBirthdayListener : NSObject

@property (retain, nonatomic) id<CalBirthdayListener> ekBirthdayListener;
@property (retain, nonatomic) Class listenerClass;

+ (void)start;
+ (void)reset;
+ (id)sharedListener;
+ (BOOL)birthdayCalendarEnabled;
+ (void)setBirthdayCalendarEnabled:(BOOL)a0;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)reset;
- (BOOL)birthdayCalendarEnabled;
- (void)setBirthdayCalendarEnabled:(BOOL)a0;

@end
