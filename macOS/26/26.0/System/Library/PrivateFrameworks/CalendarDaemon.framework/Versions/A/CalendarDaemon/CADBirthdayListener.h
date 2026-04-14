@protocol CalBirthdayListener;

@interface CADBirthdayListener : NSObject

@property (retain, nonatomic) id<CalBirthdayListener> ekBirthdayListener;
@property (retain, nonatomic) Class listenerClass;

+ (void)reset;
+ (void)start;
+ (void)setBirthdayCalendarEnabled:(BOOL)a0;
+ (id)sharedListener;
+ (BOOL)birthdayCalendarEnabled;

- (void)reset;
- (void)start;
- (void)setBirthdayCalendarEnabled:(BOOL)a0;
- (id)init;
- (BOOL)birthdayCalendarEnabled;
- (void).cxx_destruct;

@end
