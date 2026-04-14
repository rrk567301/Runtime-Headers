@interface CoreDAVHeadTask : CoreDAVTask

- (id)requestBody;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)httpMethod;
- (unsigned long long)cachePolicy;

@end
