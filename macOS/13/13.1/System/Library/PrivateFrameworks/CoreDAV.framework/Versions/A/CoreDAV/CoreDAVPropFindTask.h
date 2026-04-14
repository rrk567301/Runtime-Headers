@protocol CoreDAVTaskDelegate;

@interface CoreDAVPropFindTask : CoreDAVPropertyFindBaseTask

@property (weak, nonatomic) id<CoreDAVTaskDelegate> delegate;

- (id)httpMethod;
- (id)initWithPropertiesToFind:(id)a0 atURL:(id)a1 withDepth:(int)a2;
- (id)requestBody;
- (void)finishCoreDAVTaskWithError:(id)a0;

@end
