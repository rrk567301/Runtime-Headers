@class NSDate, NSCondition;

@interface _HDSemaphoreTab : NSObject

@property (readonly, nonatomic) NSCondition *condition;
@property (nonatomic) BOOL signaled;
@property (nonatomic) long long priority;
@property (retain, nonatomic) NSDate *requestedDate;

- (id)init;
- (void).cxx_destruct;

@end
