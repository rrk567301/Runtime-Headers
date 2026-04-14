@protocol CalBirthdayListener;

@interface CADBirthdayListener : NSObject

@property (retain, nonatomic) id<CalBirthdayListener> ekBirthdayListener;
@property (retain, nonatomic) Class listenerClass;

+ (void)start;
+ (id)sharedListener;
+ (void)reset;
+ (void)setBirthdayCalendarEnabled:(BOOL)a0;
+ (BOOL)birthdayCalendarEnabled;

- (void)start;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)setBirthdayCalendarEnabled:(BOOL)a0;
- (BOOL)birthdayCalendarEnabled;

@end
