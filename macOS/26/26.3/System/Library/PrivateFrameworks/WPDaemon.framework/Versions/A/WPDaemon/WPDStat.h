@class NSDate;

@interface WPDStat : NSObject

@property double currentTime;
@property (retain) NSDate *lastTime;

- (void)calculateTimeUpdate;
- (id)init;
- (void).cxx_destruct;
- (void)stopTime;
- (void)startTime;

@end
