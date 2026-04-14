@class NSString;

@interface FMStopwatch : NSObject

@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *comment;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long endTime;

+ (void)initialize;
+ (void)dumpBuffer:(id)a0;
+ (id)stopwatchWithLabel:(id)a0;
+ (void)eventWithLabel:(id)a0 comment:(id)a1;
+ (void)eventWithLabel:(id)a0;
+ (id)illegalLabelCharacterSet;

- (id)description;
- (void).cxx_destruct;
- (void)stop;
- (id)initWithLabel:(id)a0;
- (void)stopWithComment:(id)a0;
- (id)descriptionAsData;

@end
