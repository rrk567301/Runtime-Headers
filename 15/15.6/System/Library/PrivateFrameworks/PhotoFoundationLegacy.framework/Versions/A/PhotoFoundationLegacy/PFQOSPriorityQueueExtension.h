@interface PFQOSPriorityQueueExtension : PFPriorityQueueExtension <PFQOSPriorityEnqueuing>

- (void)enqueueWithCurrentQOSPriority:(id /* block */)a0;
- (void)enqueueWithQOSPriority:(unsigned int)a0 block:(id /* block */)a1;
- (id)initWithConcurrentScheduling:(char)a0;

@end
