@class NSString;
@protocol VSBackgroundTaskDelegate;

@interface VSBackgroundTask : NSObject

@property (copy, nonatomic) NSString *name;
@property (weak, nonatomic) id<VSBackgroundTaskDelegate> delegate;

- (BOOL)begin;
- (void)end;
- (void).cxx_destruct;
- (id)init;

@end
