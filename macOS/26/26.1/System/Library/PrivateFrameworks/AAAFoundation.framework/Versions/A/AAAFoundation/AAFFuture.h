@class NSCondition, NSDate;

@interface AAFFuture : NSObject

@property (nonatomic) BOOL resolved;
@property (nonatomic) double maxWait;
@property (retain, nonatomic) NSDate *beginDate;
@property (retain, nonatomic) NSCondition *valueCondition;
@property (retain, nonatomic) id valueObj;

- (void)setValue:(id)a0;
- (id)value;
- (void).cxx_destruct;
- (id)initWithMaxWait:(double)a0 description:(id)a1;
- (id)init;

@end
