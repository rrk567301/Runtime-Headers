@protocol CoreDAVTaskDelegate;

@interface CoreDAVGetTask : CoreDAVTask

@property (weak, nonatomic) id<CoreDAVTaskDelegate> delegate;
@property (retain, nonatomic) id appSpecificDataItemResult;
@property (nonatomic) BOOL forceNoCache;

- (unsigned long long)cachePolicy;
- (id)requestBody;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)copyDefaultParserForContentType:(id)a0;
- (id)httpMethod;
- (id)description;
- (void).cxx_destruct;

@end
