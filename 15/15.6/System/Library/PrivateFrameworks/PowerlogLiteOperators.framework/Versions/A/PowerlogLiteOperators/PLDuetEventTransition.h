@class NSString, NSDate;

@interface PLDuetEventTransition : NSObject

@property (retain) NSDate *date;
@property (retain) NSString *bundleID;
@property char isStart;

- (id)description;
- (void).cxx_destruct;

@end
