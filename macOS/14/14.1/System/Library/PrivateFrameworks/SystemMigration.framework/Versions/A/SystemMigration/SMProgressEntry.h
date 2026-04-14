@class NSDate;

@interface SMProgressEntry : NSObject

@property (retain) NSDate *date;
@property double timeRemaining;
@property double transferRate;
@property double percentComplete;

- (void).cxx_destruct;

@end
