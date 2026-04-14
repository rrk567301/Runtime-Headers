@protocol CoreDAVPrincipalSearchPropertySetTaskDelegate;

@interface CoreDAVPrincipalSearchPropertySetTask : CoreDAVTask

@property (weak, nonatomic) id<CoreDAVPrincipalSearchPropertySetTaskDelegate> delegate;

- (id)requestBody;
- (id)copyDefaultParserForContentType:(id)a0;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)initWithURL:(id)a0;
- (id)httpMethod;

@end
