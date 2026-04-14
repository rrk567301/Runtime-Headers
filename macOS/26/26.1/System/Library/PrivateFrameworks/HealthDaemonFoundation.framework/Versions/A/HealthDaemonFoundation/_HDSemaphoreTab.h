@class NSDate, NSCondition;

@interface _HDSemaphoreTab : NSObject

@property (readonly, nonatomic) NSCondition *condition;
@property (nonatomic) BOOL signaled;
@property (nonatomic) long long priority;
@property (retain, nonatomic) NSDate *requestedDate;

- (void).cxx_destruct;
- (id)init;

@end
