@interface CoreDAVHeadTask : CoreDAVTask

- (unsigned long long)cachePolicy;
- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)requestBody;

@end
