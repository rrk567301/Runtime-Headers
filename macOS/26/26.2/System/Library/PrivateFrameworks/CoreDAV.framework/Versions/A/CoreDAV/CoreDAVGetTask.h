@protocol CoreDAVTaskDelegate;

@interface CoreDAVGetTask : CoreDAVTask

@property (weak, nonatomic) id<CoreDAVTaskDelegate> delegate;
@property (retain, nonatomic) id appSpecificDataItemResult;
@property (nonatomic) BOOL forceNoCache;

- (id)requestBody;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)httpMethod;
- (id)copyDefaultParserForContentType:(id)a0;
- (unsigned long long)cachePolicy;
- (void).cxx_destruct;
- (id)description;

@end
