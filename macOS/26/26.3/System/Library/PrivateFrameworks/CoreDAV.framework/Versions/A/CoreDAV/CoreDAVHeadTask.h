@interface CoreDAVHeadTask : CoreDAVTask

- (unsigned long long)cachePolicy;
- (id)requestBody;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)httpMethod;

@end
