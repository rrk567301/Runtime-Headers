@class NSSet, NSURL;
@protocol CoreDAVTaskDelegate;

@interface CoreDAVMkcolTask : CoreDAVActionBackedTask {
    BOOL _sendOrder;
}

@property (retain, nonatomic) NSSet *propertiesToSet;
@property (weak, nonatomic) id<CoreDAVTaskDelegate> delegate;
@property (retain, nonatomic) NSURL *priorOrderedURL;
@property (nonatomic) int absoluteOrder;

- (id)additionalHeaderValues;
- (id)requestBody;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)copyDefaultParserForContentType:(id)a0;
- (id)httpMethod;
- (id)description;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithPropertiesToSet:(id)a0 atURL:(id)a1;

@end
