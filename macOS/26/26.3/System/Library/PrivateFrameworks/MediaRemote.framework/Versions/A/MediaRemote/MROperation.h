@class NSDate;

@interface MROperation : NSOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSDate *cancellationDate;
@property (copy, nonatomic) id /* block */ operationBlock;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) double executionDuration;
@property (readonly, nonatomic) double totalDuration;
@property (readonly, nonatomic) double waitDuration;

- (void)cancel;
- (void)main;
- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0 completionHandler:(id /* block */)a1;

@end
