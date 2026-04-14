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
- (id)copyDefaultParserForContentType:(id)a0;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)httpMethod;
- (id)description;
- (id)initWithPropertiesToSet:(id)a0 atURL:(id)a1;

@end
