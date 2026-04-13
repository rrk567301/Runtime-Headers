@interface CoreDAVHeadTask : CoreDAVTask

- (unsigned long long)cachePolicy;
- (id)httpMethod;
- (id)requestBody;
- (void)finishCoreDAVTaskWithError:(id)a0;

@end
