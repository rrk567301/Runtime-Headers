@class NSString, NSMutableArray;

@interface SOPerfCounter : NSObject

@property (nonatomic) double lastStartTime;
@property (retain, nonatomic) NSMutableArray *times;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL isActive;
@property (nonatomic) double longestTime;
@property (nonatomic) double timeTally;

+ (id)formatList:(id)a0;
+ (id)formatTimeList:(id)a0;
+ (id)counterForName:(id)a0;
+ (id)activeTimings;
+ (id)allTimings;
+ (void)beginTimingForSignpost:(id)a0;
+ (void)finishTimingForSignpost:(id)a0;

- (void)start;
- (void)stop;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
