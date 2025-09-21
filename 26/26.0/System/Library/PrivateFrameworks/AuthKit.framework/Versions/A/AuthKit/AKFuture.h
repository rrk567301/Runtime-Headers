@class NSCondition, NSMutableArray, NSDate;

@interface AKFuture : NSObject

@property (nonatomic) BOOL resolved;
@property (nonatomic) double maxWait;
@property (retain, nonatomic) NSDate *beginDate;
@property (retain, nonatomic) NSCondition *valueCondition;
@property (retain, nonatomic) NSMutableArray *internalWrapper;

- (void)setValue:(id)a0;
- (id)value;
- (id)init;
- (id)initWithMaxWait:(double)a0 description:(id)a1;
- (void).cxx_destruct;

@end
