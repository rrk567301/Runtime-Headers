@class NSDate;

@interface WPDStat : NSObject

@property double currentTime;
@property (retain) NSDate *lastTime;

- (void)stopTime;
- (void).cxx_destruct;
- (void)calculateTimeUpdate;
- (void)startTime;
- (id)init;

@end
