@protocol CoreDAVOptionsTaskDelegate;

@interface CoreDAVOptionsTask : CoreDAVTask

@property (weak, nonatomic) id<CoreDAVOptionsTaskDelegate> delegate;

- (id)httpMethod;
- (id)requestBody;
- (void)finishCoreDAVTaskWithError:(id)a0;

@end
