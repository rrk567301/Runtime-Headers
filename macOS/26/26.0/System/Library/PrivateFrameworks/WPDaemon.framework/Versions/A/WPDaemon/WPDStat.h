@class NSDate;

@interface WPDStat : NSObject

@property double currentTime;
@property (retain) NSDate *lastTime;

- (void)startTime;
- (id)init;
- (void)calculateTimeUpdate;
- (void)stopTime;
- (void).cxx_destruct;

@end
