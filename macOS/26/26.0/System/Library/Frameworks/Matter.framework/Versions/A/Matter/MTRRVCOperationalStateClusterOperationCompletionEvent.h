@class NSNumber;

@interface MTRRVCOperationalStateClusterOperationCompletionEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *completionErrorCode;
@property (copy, nonatomic) NSNumber *totalOperationalTime;
@property (copy, nonatomic) NSNumber *pausedTime;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
