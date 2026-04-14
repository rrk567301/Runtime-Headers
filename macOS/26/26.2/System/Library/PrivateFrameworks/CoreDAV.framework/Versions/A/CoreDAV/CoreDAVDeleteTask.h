@class NSString;
@protocol CoreDAVTaskDelegate;

@interface CoreDAVDeleteTask : CoreDAVActionBackedTask

@property (weak, nonatomic) id<CoreDAVTaskDelegate> delegate;
@property (retain, nonatomic) NSString *previousETag;

- (id)requestBody;
- (id)additionalHeaderValues;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)httpMethod;
- (void).cxx_destruct;
- (id)description;

@end
