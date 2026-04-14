@class NSString, NSDate;

@interface CSInterval : NSObject

@property (retain) NSDate *startTime;
@property (retain) NSDate *endTime;
@property double value;
@property (retain) NSString *label;

- (id)initWithStartTime:(id)a0 endTime:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)initWithStartTime:(id)a0 endTime:(id)a1 value:(double)a2;
- (id)initWithStartTime:(id)a0 endTime:(id)a1 value:(double)a2 label:(id)a3;

@end
