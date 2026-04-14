@class NSDate;

@interface WPDStat : NSObject

@property double currentTime;
@property (retain) NSDate *lastTime;

- (void)startTime;
- (void)stopTime;
- (void)calculateTimeUpdate;
- (void).cxx_destruct;
- (id)init;

@end
