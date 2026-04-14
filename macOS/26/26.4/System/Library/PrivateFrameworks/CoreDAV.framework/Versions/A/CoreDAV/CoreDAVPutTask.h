@class NSString;
@protocol CoreDAVTaskDelegate;

@interface CoreDAVPutTask : CoreDAVPostOrPutTask

@property (retain, nonatomic) NSString *nextETag;
@property (weak, nonatomic) id<CoreDAVTaskDelegate> delegate;

- (void)finishCoreDAVTaskWithError:(id)a0;
- (void).cxx_destruct;
- (id)httpMethod;
- (id)description;

@end
