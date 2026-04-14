@protocol CalBirthdayListener;

@interface CADBirthdayListener : NSObject

@property (retain, nonatomic) id<CalBirthdayListener> ekBirthdayListener;
@property (retain, nonatomic) Class listenerClass;

+ (void)start;
+ (void)reset;
+ (void)setBirthdayCalendarEnabled:(BOOL)a0;
+ (id)sharedListener;
+ (BOOL)birthdayCalendarEnabled;

- (void)start;
- (void)reset;
- (void)setBirthdayCalendarEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)birthdayCalendarEnabled;

@end
