@class NSNumber;

@interface MTROperationalStateClusterOperationCompletionEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *completionErrorCode;
@property (copy, nonatomic) NSNumber *totalOperationalTime;
@property (copy, nonatomic) NSNumber *pausedTime;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
