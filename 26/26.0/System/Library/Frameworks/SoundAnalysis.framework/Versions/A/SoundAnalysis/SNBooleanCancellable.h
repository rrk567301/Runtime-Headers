@interface SNBooleanCancellable : NSObject <SNCancellable>

@property (nonatomic) BOOL isCancelled;

- (void)cancel;
- (id)init;

@end
