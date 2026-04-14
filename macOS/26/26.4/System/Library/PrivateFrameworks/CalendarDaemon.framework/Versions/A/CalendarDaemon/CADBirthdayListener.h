@protocol CalBirthdayListener;

@interface CADBirthdayListener : NSObject

@property (retain, nonatomic) id<CalBirthdayListener> ekBirthdayListener;
@property (retain, nonatomic) Class listenerClass;

+ (void)reset;
+ (id)sharedListener;
+ (void)start;
+ (BOOL)birthdayCalendarEnabled;
+ (void)setBirthdayCalendarEnabled:(BOOL)a0;

- (void).cxx_destruct;
- (void)reset;
- (id)init;
- (void)start;
- (BOOL)birthdayCalendarEnabled;
- (void)setBirthdayCalendarEnabled:(BOOL)a0;

@end
