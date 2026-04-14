@interface ASDJobSchedulerRequest : ASDEphemeralRequest

- (id)init;
- (id)initWithOptions:(id)a0;
- (void)findNextJobsWithCompletionBlock:(id /* block */)a0;

@end
