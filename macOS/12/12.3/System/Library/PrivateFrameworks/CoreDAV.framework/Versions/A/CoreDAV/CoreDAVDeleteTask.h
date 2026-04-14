@class NSString;
@protocol CoreDAVTaskDelegate;

@interface CoreDAVDeleteTask : CoreDAVActionBackedTask

@property (weak, nonatomic) id<CoreDAVTaskDelegate> delegate;
@property (retain, nonatomic) NSString *previousETag;

- (id)description;
- (void).cxx_destruct;
- (id)httpMethod;
- (id)additionalHeaderValues;
- (id)requestBody;
- (void)finishCoreDAVTaskWithError:(id)a0;

@end
